//Write a program that takes an integer input N and prints its factors in descending order, but skips every alternate factor.
#include <stdio.h>

int main()
{
    int n=0,res=0;
    scanf("%d",&n);
    for(int i=n; i>=1; i--) { 
        if(i==n){
            printf("%d",n);
        }
        else if(n%i==0){
            res=i;
            int count;
            count++;
            if(count%2==0) {printf(" %d",res);}
        }   
    }
    printf(".");
    return 0;
}