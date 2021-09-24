#include<iostream>

using namespace std;

int max(int a, int b){
    if(a >= b) return a;
    return b;
}

int min(int a, int b){
    if(a <= b) return a;
    return b;
}

int getCircleCount(int a, int b){
    int i = 1;
    int count = 1;
    while((count) % max(a, b) == min(a, b)){
        if(i % 2 != 0) ++count;
        ++i;
    }
    return ((count * 2) + 2);
}

int getCircleCount1(int val){
    int i = 1;
    int count = 1;
    while(((count * 2) + 2) < val){
        if(i % 2 != 0) ++count;
        ++i;
    }
    return count;
}

void testCase(){
    int a, b, c;
    cin>>a>>b>>c;
    int totalCount = getCircleCount(a, b);

    // cout<<(c+getCircleCount1(max(a, b)) + 1)%totalCount<<endl;

    cout<<"totalcount -> "<<totalCount<<" "<<endl;
    // cout<<"f -> "<<(c + ((max(a, b)/min(a, b)) + 1)) % totalCount<<" "<<endl;
    // cout<<"b -> "<<(c - ((max(a, b)/min(a, b)) + 1)) % totalCount<<" "<<endl;

    // if((c + ((max(a, b)/min(a, b)) + 1))  < totalCount){
    //     cout<<(c + ((max(a, b)/min(a, b)) + 1))<<endl;
    // }else if((c - ((max(a, b)/min(a, b)) + 1)) >= 1){
    //     cout<<(c - ((max(a, b)/min(a, b)) + 1))<<endl;
    // }else{
    //     cout<<-1<<endl;
    // }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        testCase();
    }
}