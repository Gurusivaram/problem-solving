/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include<iostream>
#include<cstdio>

using namespace std;


void printPattern(int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= i; ++j){
            printf("%d ", j + 1);
        }
        printf("\n");

    }
}

int main() {
    printPattern(5);
    return 0;
}