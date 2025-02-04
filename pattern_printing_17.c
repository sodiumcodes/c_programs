/*Write a program to generate a number pattern based on the given rules:
-The pattern consists of n rows.
-Each row starts with a number and increases column-wise.
-Numbers in each column follow a diagonal progression across rows.
For a given integer n, print the pattern as described.*/
#include <stdio.h>

int main(){
    int n=0;
    scanf("%d", &n);  
    int num1=1;  
    for (int i=1; i<=n; i++){ 
        int num2=num1;  
        for (int j=1; j<=i; j++){  
            printf("%d ",num2);
            num2+= n-j;  
        }
        num1++;  
        printf("\n");  
    }
    return 0;
}
