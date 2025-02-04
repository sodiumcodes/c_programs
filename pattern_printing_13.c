/*Write a program to print a pyramid pattern with numbers based on the input size n, where n represents the total number of rows of the pattern.
The pattern consists:
-Each row starts with spaces for alignment, followed by an increasing sequence of numbers and then a decreasing sequence.
-The rows are symmetrically aligned, forming a pyramid-like pattern.*/

#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    if(n>0) {
        for(int i=1; i<=n; i++) {
            for(int k=1; k<=n-i; k++) {
                printf(" ");
            }
            int a=1,b=i;
            for(int j=1; j<=2*i-1; j++){
                
                int c=2*i-1;
                if(j<=c/2){
                    
                    printf("%d",a++);
                }
                else{
                    printf("%d",b--);
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}