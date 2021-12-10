/*
    *****
    *****
    *****
    *****
    *****
*/

#include<iostream>
#include<cstdio>

using namespace std;


void printPattern(int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0;j < n; ++j){
            printf("* ");
        }
        printf("\n");

    }
}

int main() {
    printPattern(15);
    return 0;
}