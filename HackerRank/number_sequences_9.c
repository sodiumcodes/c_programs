//Given an integer N, determine whether it is equal to the factorial of some non-negative integer x (i.e., N=x! for some x ≥ 0). If yes, print that number whose factorial is equal to N, otherwise print "NO".
#include <stdio.h>
int main(){
    long long num,fact=1;
    int flag=0;
    scanf("%lld",&num);
    if(num==0||num==1){
        printf("1");
        return 0;
    }
    else if(num==2){
        printf("2");
        return 0;
    }
    else if(num>0){
        for(long i=2;i<=num/2;i++){
            fact*=i;
            if(fact==num){
                printf("%ld",i);
                flag=1;
                return 0;
            }
        }
    }
    if(flag==0){
        printf("NO");
    }
    return 0;
}