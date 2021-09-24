/**
 * Author --> Gurusivaram K
 * Time Stamp --> dd/mm/yy hh.mm (14/08/2021 11.05PM)
 * Problem link --> 
 **/


#include<iostream>
#include<map>
#include<vector>

using namespace std;

int sort(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; ++i){
        int isSortingDone = false;
        bool order = ((i + 1) % 2) != 0;
        for(int j = 0; j < n - 1; ++j){
            if(order && (((j + 1)% 2) != 0)){
                // cout<<"first ";wd
                if(arr[j] > arr[j + 1]){
                    isSortingDone = true;
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }else if(!order && (((j + 1)% 2) == 0)){
                // cout<<"second ";
                if(arr[j] > arr[j + 1]){
                    isSortingDone = true;
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        if(isSortingDone){
            ++count;
            // for(int k = 0; k < n; ++k){
            //     cout<<arr[k] <<" ";
            // }
            // cout<<endl;
        }
    }

    // for(int i = 0; i < n; ++i){
    //     cout<<arr[i] <<" ";
    // }
    // cout<<endl;
    return count;
}
void testCase(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    }

    cout<<sort(arr, n)<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        testCase();
    }   
    return 0;
}