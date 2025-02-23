/*Write a program to print a pattern of double hollow right triangles based on an integer input n. The pattern consists of asterisks (*) and spaces arranged as follows:
-The upper half of the pattern has rows with increasing numbers of stars on the left and the right.
-In the hollow region, spaces replace asterisks except for the outermost boundaries of the triangles.
-The last row is completely filled with asterisks (*).
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the pattern cannot be drawn.*/

#include <stdio.h>
int main()
{   int n=0;
    scanf("%d",&n);
    
    if(n>1){
        
        for(int i=1;i<=n;i++){
    
            for(int j=1;j<=i;j++){
                
                if(i==1|| i==n ||j==1||j==i)
                    printf("*");
                
                else 
                    printf(" ");
            }
            for(int k=1; k<2*(n-i)+1;k++) 
            
                printf(" ");
                
            for(int j=1;j<=i;j++){
                
                if(i==1|| i==n ||j==1||j==i)
                    printf("*");
                
                else 
                    printf(" ");
            }
            printf("\n");
        }
    }
    else 
        printf("Shape Not Possible");
    return 0;
}