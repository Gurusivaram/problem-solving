#include<iostream>
using namespace std;
int gameDatabase[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int m=3, n=3;
int player=1,row, column;
void printGame(){
        for(int i=0;i<m;++i)
            cout<<"  "<<i<<" ";
        cout<<"\n";
        for(int i=0;i<m;++i){
            cout<<i<<" ";
            for(int j=0;j<n;++j)
                cout<<gameDatabase[i][j]<<"  ";
            cout<<"\n";
        }
}
int isGameWin(){
    for(int i=0;i<m;++i){
        int j=0;
            if(gameDatabase[i][j]!=0 && (gameDatabase[i][j]==gameDatabase[i][++j]) && (gameDatabase[i][j]==gameDatabase[i][++j])){
                printGame();
                if(player==1) 
                    player=2;
                else
                    player=1;
                cout<<"Player "<<player<<" Wins..!";
                return 1;
            }
    }
    for(int j=0;j<m;++j){
        int i=0;
            if(gameDatabase[i][j]!=0 && (gameDatabase[i][j]==gameDatabase[++i][j]) && (gameDatabase[i][j]==gameDatabase[++i][j])){
                printGame();
                if(player==1) 
                    player=2;
                else
                    player=1;
                cout<<"Player "<<player<<" Wins..!";
                return 1;
            }
    }
                if(gameDatabase[0][0]!=0 && (gameDatabase[0][0]==gameDatabase[1][1]) && (gameDatabase[1][1]==gameDatabase[2][2])){
                printGame();
                if(player==1) 
                    player=2;
                else
                    player=1;
                cout<<"Player "<<player<<" Wins..!";
                return 1;
                }
                if(gameDatabase[0][2]!=0 && (gameDatabase[0][2]==gameDatabase[1][1]) && (gameDatabase[1][1]==gameDatabase[2][0])){
                printGame();
                if(player==1) 
                    player=2;
                else
                    player=1;
                cout<<"Player "<<player<<" Wins..!";
                return 1;
                }
    return 0;
    
}
void gameDisplay(){
    
    while(!isGameWin()){
        printGame();
        cout<<"Enter player "<<player<<" input: ";
        cin>>row>>column;
        if(player==1){
            gameDatabase[row][column]=1;
            player=2;
        }
        else{
            gameDatabase[row][column]=2;
            player=1;
        }
    }
}
int main(void){
    gameDisplay();
}