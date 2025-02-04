/*Write a program to print a pattern called Shape XOX for a given integer n, where n represents the number of rows and columns in the square grid.
The pattern follows these rules:
-The pattern has n rows and n columns.
-The middle row and middle column of the grid consists entirely of x characters.
-All other rows and columns contain o characters to form the shape.

Note:
-If the input n is even, convert it the next odd number, to print the shape.
-Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the shape cannot be drawn by the given input value.*/

#include <stdio.h>

int main() {
    int n=0;
    scanf("%d", &n);
    if(n>1){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(n%2==0){
                    n=n+1;
                }
                    if(j==n/2+1||i==n/2+1){
                        printf("x");
                    }
                    else{
                        printf("o");
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