//Write a program to determine whether a given integer n is positive or negative using bitwise operators.
//Note: You are not allowed to use comparison operators like <, >, <=, or >=.
#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    int A=(n>>31) & 1;
    if(A){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    return 0;
}