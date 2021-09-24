#include<iostream>

using namespace std;

int main(){
    long long int T;
    cin>>T;
    while(T--){
        long long int g1, g2, s1, s2, b1, b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        cout<<(((g1 + s1 + b1) >= (g2 + s2 + b2)) ? 1 : 2)<<endl;
    }
    return 0;
}