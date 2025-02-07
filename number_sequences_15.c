//Write a program to print a Harshad Number.
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int copyNum=num,sum=0;
    while(copyNum!=0){
        int a=copyNum%10;
        copyNum=copyNum/10;
        sum+=a;
    }
    if((num%sum)==0){
        printf("%d is a harshad number",num);
    }
    else{
        printf("%d is not a harshad number",num);
    }

    return 0;
}