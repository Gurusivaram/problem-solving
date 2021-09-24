/**
 * Author --> Gurusivaram K
 * Time Stamp --> dd/mm/yy hh.mm (14/08/2021 11.05PM)
 * Problem link --> 
 **/


#include<iostream>
#include<map>
#include<vector>

using namespace std;

void testCase(){
    int N;
    cin>>N;
    int m[N];
    string out;
    for(int i = 0; i < N; ++i){
        string s;
        cin>>s;
        if(i == 0){
            out = s;
        }else{
            for(int i = 0; i < N; ++i){
                int one = s[i] - '0';
                int two = out[i] - '0';
                int three = one & two;
                out[i] = three & '0';
                // cout<<one<<" "<<two<<" "<<three<<endl;
            }
            cout<<out<<endl;
        }
    }
    if(N == 1){
        for(int i = 0; i < N; ++i){
            int one = out[i] - '0';
            int two = out[i] - '0';
            int three = one & two;
            out[i] = three + '0';
            // cout<<one<<" "<<two<<" "<<three<<endl;
        }
    }
    cout<<out<<endl;
    // string out;
    // for(int i = 0; i < N; ++i){
    //     if(m[i] >= N){
    //         out += "0";
    //     }else{
    //         out += "1";
    //     }
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