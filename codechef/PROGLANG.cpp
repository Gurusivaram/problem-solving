/**
 * Author --> Gurusivaram K
 **/

#include<iostream>
#include<map>
#include<vector>

using namespace std;

void testCase(){
    int a, b, a1, b1, a2, b2;
    cin>>a>>b>>a1>>b1>>a2>>b2;
    if((a1 == a && b1 == b) || (a1 == b && b1 == a)) cout<<1<<endl;
    else if((a2 == a && b2 == b) || (a2 == b && b2 == a)) cout<<2<<endl;
    else cout<<0<<endl;
    // if((a == 1 && b == 2) || (a == 2 && b == 1)){
    //     if((a1 == 1 && b1 == 2) || (a1 == 2 && b1 == 1)) return 1;
    //     else return 0;
    // }else if((a == 3 && b == 4) || (a == 4 && b == 3)){
    //     if((a2 == 3 && b2 == 4) || (a2 == 4 && b2 == 3)) return 2;
    //     else return 0;
    // }
    
}

int main(){
    int T;
    cin>>T;
    while(T--){
        testCase();
    }   
    return 0;
}