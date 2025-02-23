//Given an integer n and a position i, your task is to write a program to extract the value of the i-th bit of n. The i-th bit is counted from the right, starting at position 0 (0-based indexing). Return 1 if the bit is set, otherwise return 0.

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);
    if(i>=0 && i<=31){
        int num= n>>i;
        int otpt=num & 1;
        printf("%d",otpt);
    }
    return 0;
}