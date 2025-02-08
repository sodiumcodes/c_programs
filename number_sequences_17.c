//A number is called a Strong number if the sum of the factorials of its digits is equal to the number itself. Given an integer N, determine whether it is a Strong number or not.

#include <stdio.h>

int main()
{
    long num;
    scanf("%ld",&num);
    long copyNum=num, digit=0,sum=0;
    while(copyNum!=0){
        digit=copyNum%10;
        copyNum/=10;
        long res=1;
        for(long i=digit;i>0;i--){
            res*=i;
        }
        sum+=res;
    }
    if(sum==num){
        printf("YES");
        }
    else{
        printf("NO");
    }
    return 0;
}