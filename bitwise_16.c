//Write a program to determine if two integers a and b have opposite signs using bitwise operators.
#include <stdio.h>

int main()
{   int n1,n2;
    scanf("%d %d",&n1,&n2);
   
    int A=(n1>>31) & 1;
    int B=(n2>>31) & 1;
    if((A==1 && B==1) || (A==0 && B==0)){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}