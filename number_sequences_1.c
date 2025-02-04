//Given an integer n, write a program to calculate the n-th prime number, starting from 1.
#include <stdio.h>
int main(){
    int T=0;
    scanf("%d",&T);

    int num=2;
    int count=1;

    while(count<T){
        num++;
        int primeNo=1;

        for(int i=2;i*i<=num;i++){
            if(num% i==0){
                primeNo=0;
                break;
            }
        }

        if(primeNo){
            count++;
        }
    }

    printf("%d",num);
    return 0;
}
