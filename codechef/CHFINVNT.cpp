/**
 * @author /*   * Author   :  Gurusivaram K  * Date     :  2021-08-14 15:18:53   * Question :  https://www.codechef.com/AUG21C/problems/PROBDIFF */

#include<iostream>
#include<map>
#include<vector>

using namespace std;

void testCase(){
    int N, p, K, numberOfDays = 0;
    cin>>N>>p>>K;
    map<int, vector<int> > mapOfModToDays;

    for(int i = 0; i < N; ++i){
        mapOfModToDays[i % K].push_back(i);

        if(i % K == p % K && i <= p){
            ++numberOfDays;
        }
    }

    // for(int i = 0; i% K < p % K && i < N; ++i){
    //     numberOfDays += mapOfModToDays[i % K].size();
    // }
    // cout<<numberOfDays<<endl;


    for(map<int, vector<int> > ::iterator i = mapOfModToDays.begin(); i != mapOfModToDays.end(); ++i){
        if(i -> first == p % K){
            // for(int j = 0; j < (i -> second).size(); ++j){
            //     if((i -> second).at(j) == p){
                    // cout<<++numberOfDays<<endl;
                    // return;
            //     }else{
            //         ++numberOfDays;
            //     }
            // }
            cout<<numberOfDays<<endl;
            return;
        }else{
            numberOfDays += (i -> second).size();
        }
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        testCase();
    }   
    return 0;
}