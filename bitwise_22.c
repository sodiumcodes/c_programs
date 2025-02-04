//Write a program to set the rightmost unset bit in the binary representation of a number n.
#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    int res=n| n+1;
    printf("%d ",res);
    return 0;
}