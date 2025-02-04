//Write a program to print a double-sided pyramid pattern based on an integer input n. Each row of the pyramid should contain left-aligned and right-aligned patterns of asterisks separated by two spaces.

#include <stdio.h>
int main()
{   int n=0;
    scanf("%d",&n);
    
    if(n>1){
        
        for(int i=1;i<=n;i++){
        
            for(int k=1;k<=n-i;k++)
                printf(" ");
        
            for(int j=1;j<=2*i+2;j++){
                if(j==i+1|| j==i+2) 
                    printf(" ");
                else 
                    printf("*");
            }
                printf("\n");
        }
    }
    else 
        printf("Shape Not Possible");
    return 0;
}

