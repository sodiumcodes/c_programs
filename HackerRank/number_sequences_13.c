//Write a program to count the nuber of digits of a given number N that are prime.
#include <stdio.h>

int main()
{
    long num=0;
    scanf("%ld",&num);
    if(num<0){
        num=-num;
    }
    long count=0;
    while(num!=0){
        long x=num%10;
        num/=10;
        if(x==2||x==3||x==5||x==7){
            count++;
        }
    }
    printf("%ld",count);

    return 0;
}