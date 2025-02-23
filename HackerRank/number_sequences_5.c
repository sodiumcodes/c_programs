/*You are given an integer N. Your task is to find the nearest prime number to N.
-If N itself is prime, return N.
-If there are two prime numbers at the same minimum distance from N, return the smaller one.*/
#include <stdio.h>

int main()
{
    int num=0;
    scanf("%d",&num);
    int flag=0,a=num,lessNum=0,moreNum=0;
    if(num==1){
        printf("2");
        return 0;
    }
        if(num>1){
         while(a!=0){
         int flag=0;
        for (int i=2; i<=num/2;i++){
            
            if(a==2|| a==3){
                break;
            }
            if(a%i==0){
                flag=1;
                break;
            }
        }
        a--;
         if(flag==0){
            lessNum=a+1;
            break;
         }
    }
    a=num;
    while(moreNum!=a){
        flag=0;
        for (int i=2; i<=num;i++){
            if(a%i==0){
                flag=1;
                break;
            }
        }
        a++;
        if(flag==0){
            moreNum=a-1;
            break;
        }
    }
    
    int beforeNum=num-lessNum;
    int afterNum=moreNum- num;
    if(beforeNum<=afterNum)
    printf("%d",lessNum);
    else
    printf("%d",moreNum);
    }
    return 0;
}