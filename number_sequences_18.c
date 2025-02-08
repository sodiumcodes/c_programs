//An Automorphic Number is a number whose square ends with the same digits as the number itself. Write a program to check if a given number N is Automorphic or not.

#include <stdio.h>
#include<math.h>
int main()
{
    long num;
    scanf("%ld",&num);
    long copyNum=num;
    int count=0,digitnumsq=0;

    while(copyNum!=0){
        count++;
        copyNum/=10;
    }
    copyNum=num;
    copyNum*=copyNum;
    
    int power=pow(10,count);
   
    digitnumsq= copyNum%power;
    
    if(digitnumsq==num){
        printf("%ld is automorphic",num);
    }
    else{
        printf("%ld is not automorphic",num);
    }
    return 0;
}