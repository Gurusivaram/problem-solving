#include<iostream>
#include<vector>

using namespace std;

int getGoodnessScore(string arr){
    int start = 0, end = arr.size() - 1, goodNessScore = 0;
    while(start < end){
        if(arr[start] != arr[end]) ++goodNessScore;
        ++start;
        --end;
    }
    return goodNessScore;
}

void testCase(){
    int N, K, minimumnumberOfOperations = 0;
    string str;
    cin>>N>>K;
    cin>>str;
    int size = str.size();
    int availableGoodnessScore = getGoodnessScore(str);
    if(K >= availableGoodnessScore){
        int balanceScore = size/2 - availableGoodnessScore;
        cout<<K - availableGoodnessScore;
    }else{
        cout<<0<<endl;
    }
    // while(minimumnumberOfOperations != getGoodnessScore(str)){
    //     str = operateStringTogetGoodScore(str, size);
    //     ++minimumnumberOfOperations;
    // }

    // cout<<minimumnumberOfOperations<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        testCase();
    }
    return 0;
}