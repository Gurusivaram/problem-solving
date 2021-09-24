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
    // int p[N], e[N];
    
    // for(int i = 0; i < N; ++i)
    //     cin>>p[i];
    // for(int i = 0; i < N; ++i)
    //     cin>>e[i];

    int N;
    cin>>N;
    string p, e;
    cin>>p;
    cin>>e;
    map<int, int> m;
    m[0] = 0;
    m[11] = 0;
    m[12] = 0;
    m[2] = 0;
    // int count = 0;
    // for(int i = 0; i < N; ++i){
    //     if(p[i] == '0') ++count;
    // }
    // if(count >= N){
    //     cout<<0<<endl;
    //     return;
    // }
    // count = 0;
    // for(int i = 0; i < N; ++i){
    //     if(e[i] == '0') ++count;
    // }
    // if(count >= N){
    //     cout<<0<<endl;
    //     return;
    // }
    
    int count = 0;
    for(int i = 0; i < N; ++i){
        if(p[i] == '1' && e[i] == '1'){
            if(m[0] > 0){
                ++count;
                --m[0];
            }else{
                ++m[2];
            }
        }else if(p[i] == '1' && e[i] == '0'){
            if(m[12] > 0){
                ++count;
                --m[12];
            }else{
                ++m[11];
            }
        }else if(p[i] == '0' && e[i] == '1'){
            if(m[11] > 0){
                ++count;
                --m[11];
            }else{
                ++m[12];
            }
        }else if(p[i] == '0' && e[i] == '0'){
            if(m[0] > 0){
                ++count;
                --m[2];
            }else{
                ++m[0];
            }
        }
    }
    
    int rankTwo = m[2];
    int rankOneOne = m[11];
    int rankOneTwo = m[12];
    int rankZero = m[0];
    int totalTemSize = 0;
    // cout<<rankTwo<<" "<<rankOneOne<<" "<<rankOneTwo <<" "<<rankZero<<endl;
    if(rankTwo >= rankZero){
        totalTemSize += rankZero;
        rankTwo -= rankZero;
        rankZero = 0;
    }
    else if(rankTwo > 0 && rankTwo < rankZero){
        totalTemSize += rankTwo;
        rankTwo = 0;
        rankZero = 0;
    }
    // cout<<rankTwo<<" "<<rankOneOne<<" "<<rankOneTwo <<" "<<rankZero<<endl;
    if(rankOneOne > rankOneTwo){
        totalTemSize += rankOneTwo;
        rankOneOne -= rankOneTwo;
        rankOneTwo = 0;
    }
    else if(rankOneOne <= rankOneTwo){
        totalTemSize += rankOneOne;
        rankOneTwo -= rankOneOne;
        rankOneOne = 0;
    }
    if(rankOneOne > 0){
        if(rankTwo >= rankOneOne){
            totalTemSize += rankOneOne;
            rankTwo -= rankOneOne;
            rankOneOne = 0;
        }
    }else if(rankOneTwo > 0){
        if(rankTwo >= rankOneTwo){
            totalTemSize += rankOneTwo;
            rankTwo -= rankOneTwo;
            rankOneTwo = 0;
        }
    }
    totalTemSize += (rankTwo/2);
    cout<<count + totalTemSize<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        testCase();
    }   
    return 0;
}