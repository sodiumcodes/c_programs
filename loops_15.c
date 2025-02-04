/*Write a program to generate the Collatz sequence for a given positive integer n. Starting with any positive integer n, Collatz sequence is defined corresponding to n as the numbers formed by the following operations :
If n is even, then n = n / 2.
If n is odd, then n = 3*n + 1.
Repeat above steps, until it becomes 1.*/

#include<stdio.h>
int main(){
    int n=0;
    scanf("%d", &n);
   
    
    if(n>1){
    printf("%d ->",n);
    for (int i=2;i<n;i++){
        if(n%2==1){
            n = 3*n + 1;
            printf(" %d ->",n);
    }
    else{
        n = n / 2;
        printf(" %d ->",n);
    }
    i--;
    }
    printf(" 1");
    }
    else if (n==1)printf("1");
    else printf("0");
    return 0;
}