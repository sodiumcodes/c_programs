/*Write a program to print a symmetrical "X" shape for a given integer n, where n represents the number of rows and columns in the square grid.
The pattern follows these rules:
-The pattern has n rows and n columns.
-Asterisks (*) are placed along the two diagonals:
-The main diagonal (from the top-left to the bottom-right).
-The anti-diagonal (from the top-right to the bottom-left).
-All other positions in the grid are filled with spaces.

Note:
-If the input n is even, convert it the next odd number, to print the shape.
-Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the shape cannot be drawn by the given input value.*/

#include <stdio.h>
int main()
{   int n=0;
    scanf("%d",&n);
    
    if(n>1){
        if(n%2==0){
            n=n+1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j||i+j==n+1) 
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