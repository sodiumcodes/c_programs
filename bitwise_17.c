//Write a program to multiply a given integer n by 7 using only bitwise operators. You are not allowed to use the multiplication (*) operator directly.
#include <stdio.h>

int main()
{   int n=0;
    scanf("%d", &n);
    int A= n+n+n+n+n+n+n;
    printf("%d", A);
    return 0;
}