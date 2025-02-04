//Write a program to check if a given integer n is a multiple of 4 using only bitwise operators. You are not allowed to use the modulus operator (%), division operator (/), or loops. Use bitwise operations to determine the result efficiently.
#include <stdio.h>

int main()
{   int n;
    scanf("%d", &n);
    
    int A= n &3;
    if (A)
    printf("No");
    else printf("Yes");
    return 0;
}