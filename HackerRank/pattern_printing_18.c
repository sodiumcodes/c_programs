/*Write a program to generate a number pattern based on the following rules:
-The pattern consists of n rows.
-Numbers alternate between being printed from the smallest available number (start) and the largest available number (end), for each column.
-For odd columns, print numbers from start (increasing order).
-For even columns, print numbers from end (decreasing order).
For a given integer n, print the pattern as describe*/

#include <stdio.h>

int main(){
    int n=0;
    scanf("%d", &n);  
    for (int i=1; i<=n; i++){ 
        int num2=i;  
        for (int j=1; j<=i; j++){  
            if(j%2==1){
            printf("%d ",num2);
            num2+=2*n-2*i+1;
            }
            else{
                printf("%d ",num2);
                num2+=2*(i-j);
            }
        }
        
        printf("\n");  
    }
    return 0;
}
