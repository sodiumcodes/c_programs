//Write a program that takes a positive integer N as input from the user and prints all natural numbers from 1 to N, with each number followed by a space (including the last number).
#include <stdio.h>

int main()
{   int n=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
       printf("%d ",i);
    }
    return 0;
}