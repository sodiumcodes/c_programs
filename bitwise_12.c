//Write a program to check if a given integer n is a power of 2 using bitwise operators.
#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    if(a==0){
        printf("No");
        return 0;
    }
    int A= a & (a-1);
    if(A==0) printf("Yes");
    else printf("No");
    return 0;
}