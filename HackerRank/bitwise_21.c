//You are given a number n. Your task is to multiply it by 3.5 using only bitwise operators and addition.
#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    int res=n+n+n+(n/2);
    printf("%d ",res);
    return 0;
}