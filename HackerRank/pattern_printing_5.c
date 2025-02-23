//Write a program to print an arrowhead pattern based on an integer input n. The pattern should consist of asterisks (*) in the shape of an arrowhead which narrows back to a single asterisk symmetrically after reaching the widest row. The pattern should be formed based on the number of rows n entered by the user.

#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    if(n>1){
        for(int i=1; i<=n; i++){
            for( int j=1; j<=i; j++){
                if(j==1|| j==i)
                    printf("*");
                else 
                    printf(" ");
            }
            printf("\n");
        }
        for(int i=2; i<=n; i++){
            for( int j=1; j<=n-i+1; j++){
                if(j==1|| j==n-i+1)
                    printf("*");
                else 
                    printf(" ");
            }
            printf("\n");
        }
    }
    else printf("Shape Not Possible");
    return 0;
}