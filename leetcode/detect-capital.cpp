#include<iostream>
using namespace std;

class Solution {
public:
    bool isCaps(char c){
        return c >= 65 && c <= 65 + 26;
    }
    bool detectCapitalUse(string s) {
        int numberOfCapsInWord = 0;
        for(int i = 0; i < s.size(); ++i)
            if(isCaps(s[i]))
                ++numberOfCapsInWord;
        if(numberOfCapsInWord == 0 || (numberOfCapsInWord == 1 && isCaps(s[0])) || numberOfCapsInWord == s.size())
            return true;
        return false;
    }
};