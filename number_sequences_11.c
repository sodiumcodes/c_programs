/*Samay loves exploring special numbers and recently learned about perfect numbers. He wants to quickly check if a given number is a perfect number or not. Write a program to determine this for him.
A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int copyNum=num,sum=0;
    if(num>0){
    for( int i=1;i<=num/2;i++){
        if(copyNum%i==0){
            sum+=i;
        }
    }
    }
    if (sum==num){
        printf("YES");
    }
    else{
          printf("NO");
    }
    return 0;
}
