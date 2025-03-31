//You are given an array of size N-1 containing distinct integers from 1 to N (inclusive). This means exactly one number is missing from the sequence. Your task is to read the input, determine the missing number, and print the output.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n-1];
    
    for(int i=0;i<n-1;++i){
        scanf("%d",&a[i]);
    }
    int swap=1;
    while(swap){
        swap=0;
        for(int i=0;i<n-2;++i){
            if(a[i]>a[i+1]){
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                swap++;
            }
        }
        
    }
    int flag=1;
  
    for(int i=0;i<n-1;++i){
        if(a[i]!=i+1){
            flag=0;
            printf("%d",i+1);
            break;
        }
    }
    if(flag){
        printf("%d", n);
    }
    return 0;
}