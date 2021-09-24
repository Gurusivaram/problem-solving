/**
 * Author --> Gurusivaram K
 * Time Stamp --> dd/mm/yy hh.mm (14/08/2021 11.05PM)
 * Problem link --> 
 **/
// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <math.h>
#include <limits>

using namespace std;

void testCase(vector<string> v)
{
    for (int k = 0; k < v.size(); ++k)
    {
        string s, a;
        s = v[k];
        if (s.size() == 1)
        {
            cout << "IMPOSSIBLE" << endl;
            break;
        }
        a = s;
        // int arr[26] = {0};
        // for(int i = 0; i < s.size(); ++i){
        //     ++arr[s[i] - 'a'];
        // }
        // int max = 0;
        // for(int i = 0; i < 26; ++i){
        //     if(arr[i] > 1){
        //         max += arr[i];
        //     }
        // }
        // bool possiblity = false;
        // if(max <= s.size()/2){
        //     possiblity = true;
        // }

        vector<int> arr(s.size(), 0);

        int start = 0, end = s.size() - 1;
        bool isFound = true;
        while (start <= end)
        {
            // cout << "loop runs" << endl;
            bool isProblem = false;
            if (s[start] != s[end] && s[start] != a[end] && s[end] != a[start])
            {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                // cout<<"changed "<<s<<endl;
            }
            else
            {
                isProblem = true;
                int ind = end;
                while (ind >= 0)
                {
                    if (s[start] != s[ind] && s[start] != a[ind] && s[ind] != a[start])
                    {
                        // cout<<"inside if "<<s<<endl;
                        break;
                    }
                    --ind;
                }
                if(ind >= 0){
                    char temp = s[start];
                    s[start] = s[ind];
                    s[ind] = temp;
                    // cout<<"changed "<<s<<endl;
                }
            }
            start += 1;
            if (!isProblem)
                end -= 1;
        }
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] == s[i])
            {
                cout << "IMPOSSIBLE" << endl;
                cout << s << endl;
                isFound = false;
                break;
            }
        }
        if(isFound)
            cout << s << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    vector<string> v;
    while (T--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    testCase(v);
    return 0;
}