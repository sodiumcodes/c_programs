/*Write a program to print a hollow sandglass pattern using asterisks (*).
The pattern should be formed based on the number of rows n entered by the user.
The pattern must have the following properties:
-The first and last rows cannot have 2 or more continuous spaces between asterisks (*).
-All intermediate rows should have hollow spaces between the boundary asterisks.
-The pattern should have a symmetric sandglass shape.*/

//hollow hour GLASS
#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    if(n>1){
        for(int i=1;i<=n;i++){
            for(int k=1;k<=i-1;k++)
                printf(" ");
            for(int j=1;j<=n-i+1;j++)
            if(n<3){
                if(j==1||j==n-i+1)
                    printf("* ");
                
                else 
                    printf("  ");
            }
            else{
                if(i==1||i==n ||j==1||j==n-i+1)
                    printf("* ");
                
                else 
                    printf("  ");
            }
            printf("\n");
                
        }
        for(int i=2;i<=n;i++){
            for(int k=1;k<=n-i;k++)
                printf(" ");
            for(int j=1;j<=i;j++)
            if(n<3){
                if(j==1||j==i)
                    printf("* ");
                
                else 
                    printf("  ");
            }
            else{
                if(i==n ||j==1||j==i)
                    printf("* ");
                
                else 
                    printf("  ");
            }
        printf("\n");
        }
    }
    
    else printf("Shape Not Possible");
    return 0;
}
 