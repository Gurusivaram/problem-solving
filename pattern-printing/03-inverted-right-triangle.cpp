/*
    *****
    ****
    ***
    **
    *
*/

#include<iostream>
#include<cstdio>

using namespace std;


void printPattern(int n){
    for(int i = 0; i < n; ++i){
        for(int j = 5; j > i; --j){
            printf("* ");
        }
        printf("\n");

    }
}

int main() {
    printPattern(5);
    return 0;
}