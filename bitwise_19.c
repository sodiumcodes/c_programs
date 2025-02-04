//Write a program to find the bitwise AND of two given integers a and b without using the & operator. You can use other bitwise operators like |, ^, ~, and shifts to compute the result.
#include <stdio.h>
int main()
{   int n1=0,n2=0;
    scanf("%d %d", &n1, &n2);
    n1= ~n1;
    n2= ~n2;
    int A= ~(n1|n2);
    printf("%d", A);
    return 0;
}