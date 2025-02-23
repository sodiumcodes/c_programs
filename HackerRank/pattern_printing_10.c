/*Write a program to print a butterfly pattern based on an integer input n. The pattern should consist of stars (*) and spaces arranged as follows:
-The upper half of the butterfly contains rows where the number of stars increases, and the spaces decrease symmetrically.
-The lower half is a mirror image of the upper half.*/

#include <stdio.h>
int main()
{   int n=0;
    scanf("%d",&n);
    
    if(n>1){
        
        for(int i=1;i<=n;i++){
    
            for(int j=1;j<=i;j++){
                    printf("*");
            }
            for(int k=1; k<2*(n-i)+1;k++){
                printf(" ");
            }  
            for(int j=1;j<=i;j++){
                    printf("*");
            }
            printf("\n");
        }
        for(int i=2;i<=n;i++){
    
            for(int j=1;j<=n-i+1;j++){
                    printf("*");
            }
            for(int k=1; k<2*i-1;k++){
                printf(" ");
            }  
            for(int j=1;j<=n-i+1;j++){
                    printf("*");
            }
            printf("\n");
        }
    }
    else 
        printf("Shape Not Possible");
    return 0;
}