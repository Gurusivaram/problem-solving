#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

bool isContainsThree(int num)
{
    bool result = false;
    while (num > 0)
    {
        int end = num % 10;
        // cout<<"end--> "<<end<<endl;
        if (end == 3)
        {
            result = true;
        }
        num /= 10;
        break;
    }
    return result;
}

void testCase(){
    int k;
    cin>>k;
    int i = 1;
    int finalNum = 0;
    int count = 1;
    while(i <= 100000 && count <= k){
        if(i % 3 != 0 && !isContainsThree(i)){
            finalNum = i;
            ++count;
            // cout<<"final --> "<<finalNum<<endl;
        }
        ++i;
    }
    cout<<finalNum<<endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        testCase();
    }
    return 0;
}