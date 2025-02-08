/*A number N is called a Supreme Prime if:
N is a prime number.
The sum of its digits is also a prime number.
Given an integer N, write a program to determine whether it is a Supreme Prime or not.*/

#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num==1){
        printf("NO");
        return 0;
    }
    int flag=0,sum=0,copyNum=num;
    
    for(int i=2;i*i<=num;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
    if(flag==0){
        while(copyNum!=0){
            int res=copyNum%10;
            sum+=res;
            copyNum/=10;
        }
        for(int i=2;i*i<=sum;i++){
            if(sum%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }
    return 0;
}