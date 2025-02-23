//Write a program to count the number of set bits in the first 4 bits (rightmost bits) of an integer n. Use bitwise operators to solve the problem.

#include <stdio.h>

int main() {

    int num,count=0;
    scanf("%d", &num);
    if(num&1)
    {
        count++;
    }
    if(num&(1<<1))
    {
        count++;
    }
    if(num&(1<<2))
    {
        count++;
    }
    if(num&(1<<3))
    {
        count++;
    }
    printf("%d",count);
    return 0;
}