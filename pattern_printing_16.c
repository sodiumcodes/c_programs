/*Write a program to generate a number pattern based on the following rules:
-The pattern consists of n rows.
-The numbers alternate between starting with 1 and 2 for each row.
-Odd-numbered rows (1st, 3rd, etc.) start with 1 and continue with odd numbers.
-Even-numbered rows (2nd, 4th, etc.) start with 2 and continue with even numbers.
For a given integer n, print the pattern as described.*/
#include <stdio.h>

int main() {
    
   int n=0;
    scanf("%d",&n);
    
    for(int i=1; i<=n;i++){
        int a=2,b=1;
        for(int j=1;j<=i;j++){
            
            if(i%2==0){
                printf("%d ",a);
                a+=2;
            }
            else{
                printf("%d ",b);
                b+=2;
            }   
        }
        printf("\n");
    }
    return 0;
}