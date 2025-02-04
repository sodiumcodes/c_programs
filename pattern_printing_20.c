/*Write a program to generate a symmetrical pyramid pattern with n rows based on the following rules:
-The pattern consists of n rows.
-Each row contains a sequence of numbers that increases symmetrically outward from 0 at the center.
-For a specific row:
    -The numbers start with a number and decrease to 0.
    -Then, they increase again symmetrically from 1 to the end.
-The pattern is centered with spaces to form a symmetrical pyramid.
For a given integer n, print the pattern as described*/
#include <stdio.h>

int main()
{   int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        
        int a=0,b=i;
        for(int j=0;j<=2*n-1;j++){
            
            if(i+j<n-1)
                printf(" ");
            else if(i+j>=n && j-i<=n && i<=n) {
                int c=2*n-1;
                if(j<=c/2){
                    printf("%d",b--);
                }
                if(j>c/2){
                    printf("%d",a++);
                }
            }
        }
        printf("\n");
       
    }
    return 0;
}