//Write a program to print Pascal's Triangle with numbers based on the input size n, where n represents the total number of rows of the pattern.

#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    if(n>0) {
        for(int i=0; i<n; i++) {
            for(int k=1; k<n-i; k++){
                printf(" ");
            }
            int value=1;
            for(int j=0;j<=i;j++){
                printf("%d ", value);
                value=value* (i-j)/(j+1);
                   }
            printf("\n");
        }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}
