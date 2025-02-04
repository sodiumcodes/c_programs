//Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.
#include <stdio.h>

int main()
{
    int n1,n2,A,B,C;
    scanf("%d %d",&n1,&n2);
    A=n1-n2;
    B=(A>>31) &1;
    B = -B;
    C=(n1 & B) | (n2 & ~B);
    printf("%d",C);

    return 0;
}