//Write a program to find the maximum of two integers a and b without using any comparison operators (<, >, <=, >=) and if-else at any stage in the program. Use only bitwise operators and logical operators to determine which number is larger.
#include <stdio.h>
int main() 
{   int a,b;
    scanf("%d %d", &a, &b);
    int N = a-b;
    int A = (N>>31) & 1;
    int B = a - (N * A);
    printf("%d", B);
    return 0;
}
