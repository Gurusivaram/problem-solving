/**
 * Author --> Gurusivaram K
 **/

#include<iostream>
#include<map>
#include<vector>

using namespace std;

void testCase(){
    int n;
    cin>>n;
    int length = n;
    int i = 0;
    while(i <= n){
        int currentSum = (((n)* (n + 1))/2) - i;
        // cout<<currentSum<<endl;
        if(currentSum % 2 == 0){
            break;
        }
        --length;
        ++i;
    }
    cout<<length<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        testCase();
    }   
    return 0;
}