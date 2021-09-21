#include<iostream>
using namespace std;

class Solution {
public:
    string reversePartOfString(string s, int start, int end){
        while(start < end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            ++start;
            --end;
        }
        return s;
    }
    string reverseStr(string s, int k) {
        int size = s.size();
        int i = 0;
        while(i < size){
            if((i + k - 1) < size){
                s = reversePartOfString(s, i, i + k - 1);        
            }else{
                s = reversePartOfString(s, i, size - 1);     
            }
        
            i = i + (2 * k);
        }
        return s;
    }
};