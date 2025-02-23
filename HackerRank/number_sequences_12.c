/*Given an integer N, write a program to find:
-The smallest prime P1 that is strictly greater than N.
-The largest prime P2 that is strictly smaller than N.
-Then, return the absolute difference |P1 - P2|.
Note: If P1 or P2 does not exist, consider it as 0.*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num>0 && num<=1000000){
    int copyNum=num-1,flag=0,P1=0,P2=0;
    //smaller number
    while(copyNum!=1){
        flag=0;
    for(int i=2; i*i<=num;i++){
        if(copyNum%i==0){
            flag=1;
            copyNum--;
            break;
        }
    }
    if(flag==0){
        P2=copyNum;
        break;
    }
    }
    //larger number
    copyNum=num+1;
    while(copyNum!=0){
        flag=0;
    for(int i=2; i*i<=copyNum;i++){
        
        if(copyNum%i==0){
            flag=1;
            copyNum++;
            break;
        }
        
    }
    if(flag==0){
        P1=copyNum;
        break;
        }
    }
    
   printf("%d",P1-P2);
    }
    return 0;
}