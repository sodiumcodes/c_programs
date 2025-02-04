//Given two integers L and R, count the number of prime numbers in the range [L, R] (inclusive) and print all the prime numbers in this range.
#include <stdio.h>

int main()
{
    int left=0,right=0;
    scanf("%d %d",&left,&right);
    int count=0,a=left,b=0;
   
    if(left<=right && left>=1){
    if(a==1){
        a++;
    }
    while(a<=right){
        int flag=0;
        
        for (int i=2; i*i<=a;i++){
            
            if(a==2|| a==3){
                break;
            }
           
            if(a%i==0){
                flag=1;
                continue;
            }
        } 
        a++;
        if(flag==0){
            count++;
        }
    }
    printf("%d\n",count);
    a=left;
    if(a==1){
            a++;
    }
    while(a<=right){
         int flag=0;
        for (int i=2; i*i<=a;i++){
            
            if(a==2|| a==3){
                break;
            }
            if(a%i==0){
                flag=1;
                break;
            }
        }
        a++;
         if(flag==0){
            b=a-1;
            
            printf("%d ",b);
         }
    }
    }
    else{
        printf("0");
    }
    return 0;
}