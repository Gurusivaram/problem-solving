#include<iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        long long N = n;
        return (1 + sqrt(1 + (8 * N)))/2 - 1;
    }
};