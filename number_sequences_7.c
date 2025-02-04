//Given an integer N, calculate the sum of the first N prime numbers.
#include <stdio.h>

int main()
{
    int num=0,sum=0,a=2,count=0;
    scanf("%d",&num);
    if(num>0){
        while(count<num){
            int flag=0;
            for(int j=2;j*j<=a;j++){
                if(a%j==0){
                    a++;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                sum+=a;
                count++;
                a++;
            }
    }
    }
        printf("%d",sum);
    
    return 0;
}