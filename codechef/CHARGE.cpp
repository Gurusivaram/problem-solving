/**
 * Author --> Gurusivaram K
 * Time Stamp --> dd/mm/yy hh.mm (14/08/2021 11.58PM)
 * Problem link --> https://www.codechef.com/AUG21C/submit/CHARGE
 **/


#include<iostream>
#include<map>
#include<vector>

using namespace std;

void testCase(){
    int N;
    cin>>N;
    vector<int> chargeTime(N, 0);
    vector<int> leaveTime(N, 0);
    multimap<int, int> schedule;
    map<int, int> listOfPersons;
    vector<vector<int> > triplet;

    int totalTime = 0;
    int startTime = 0;
    int endTime = 0;

    for(int i = 0; i < N; ++i){
        cin>>chargeTime[i];
    }
    for(int i = 0; i < N; ++i){
        cin>>leaveTime[i];
        listOfPersons[leaveTime[i]] = i;
        if(totalTime < leaveTime[i] && chargeTime[i] <= leaveTime[i])
            totalTime = leaveTime[i];
    }

    for(int i = 0; i < N; ++i){
        if(chargeTime[i] <= leaveTime[i]){
            schedule.insert(make_pair(chargeTime[i], leaveTime[i]));
        }
    }

    multimap<int, int>::iterator i = schedule.begin();
    for( ; i != schedule.end(); ++i){
        // cout<<"ket --> "<<i -> first<<" value --> "<<i->second<<endl;
        // cout<<"total time --> "<<totalTime<<endl;
        if(i -> first <= totalTime){
            // cout<<"counter   ket --> "<<i -> first<<" value --> "<<i->second<<endl;
            vector<int> v;
            v.push_back(listOfPersons[i -> second] + 1);
            v.push_back(startTime);
            endTime = startTime + i -> first;
            v.push_back(endTime);
            startTime = endTime;
            totalTime -= i -> first;
            triplet.push_back(v);
        }
    }
    int size = triplet.size();
    cout<<size<<endl;
    for(int i = 0; i < size; ++i){
        cout<<triplet[i][0]<<" "<<triplet[i][1]<<" "<<triplet[i][2]<<endl;
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