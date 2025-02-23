/*You are given an integer n. Write a program to check if all the used bits (excluding padded bits) in the binary representation of n are set to 1.
A number is said to have all its used bits set to 1 if the binary representation of the number consists entirely of 1s, starting from the least significant bit up to the most significant used bit. For example, the binary representation of 7 is 111, where all the bits are 1. However, the binary representation of 5 is 101, where not all bits are set to 1.*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num==0) printf("No");
    else if ((num & (num+1)) == 0)
    {
        printf("Yes");
    } 
    else{
        printf("No");
    }

    return 0;
}