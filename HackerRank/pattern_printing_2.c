/*Write a program to print a square pattern based on an integer input n. The pattern should consist of asterisks (*) and hash symbols (#) arranged as follows:
-The first and last rows of the square are completely filled with asterisks (*).
-The intermediate rows have asterisks (*) at the boundaries and hash symbols (#) filling the inner spaces.
*/
#include <stdio.h>
int main()
{   int n=0;
    scanf("%d",&n);
    
    if(n>2){
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==1|| i==n|| j==1||j==n) 
                    printf("*");
                else 
                    printf("#");
            }
                printf("\n");
        }
    }
    else 
        printf("Shape Not Possible");
    return 0;
}