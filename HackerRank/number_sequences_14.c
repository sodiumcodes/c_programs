//Aditi is fascinated by special numbers and has learned about Armstrong numbers. She wants to quickly check if a given number is an Armstrong number or not. Write a program to help Aditi to determine if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{
    int num=0;
    scanf("%d",&num);
    int copyNum=num;
    int count=0,y=0;
    while(copyNum!=0){
        
        copyNum/=10;
        count++;
    }
    copyNum=num;
    while(copyNum!=0){
        int x = copyNum%10;
        copyNum/=10;
        y+=pow(x,count);
    }
    if(y==num){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
