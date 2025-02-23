/*Write a program to print the word INNOVATION in a stylized pattern using asterisks and spaces, based on a specific design. The number of rows for each letter will depend on the user-provided input n. Each letter in the word "INNOVATION" will follow a predefined pattern of rows and columns as shown below.
For a given odd integer n, print the pattern as described.
Note: Leave two spaces between each letters in the word.*/
#include <stdio.h>
int main() {
    int n = 0; 
    scanf("%d",&n);

    for (int i = 0; i <= n-1; i++) {
     //i
        for (int j = 0; j <=n-1; j++) {
            if (i == 0 || i == n-1 || j == n/2) 
                printf("*");
            else
                printf(" ");
        }
        printf("  "); 
    //nn
        for(int m=1;m<=2;m++){
        for (int j = 0; j <=n-1; j++) {
            if (j == 0 || j == n-1 || i == j) 
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        }
        //o
        for (int j = 0; j <=n-1; j++) {
            if ((i == 0 || i == n-1) && (j > 0 && j < n-1)) 
                printf("*");
            else if ((j == 0 || j == n-1) && (i > 0 && i < n-1)) 
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        //v
        for (int j = 0; j < 2* n-1; j++) {
            if (j == i || i+j ==2* (n-1) )
                printf("*");
            else
                printf(" ");
        }
        printf("   ");
        //a
        for (int j = 0; j <= n-1; j++) {
            if (((j == 0 || j == n-1) && i > 0) || ((i == 0 || i == n/2) && (j > 0 && j < n-1)))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        //t
        for (int j = 0; j <=n-1; j++) {
            if(n%2==0){
            if (i == 0 || j == (n/2)-1) 
                printf("*");
            else
                printf(" ");
        }
        
        else{
            if (i == 0 || j == n/2) 
                printf("*");
            else
                printf(" ");
        }
        }
        printf("  ");
        //i
        for (int j = 0; j <=n-1; j++) {
            if (i == 0 || i == n-1 || j == n/2) 
                printf("*");
            else
                printf(" ");
        }
        printf("  "); 
            
        //o
         for (int j = 0; j <=n-1; j++) {
            if ((i == 0 || i == n-1) && (j > 0 && j < n-1)) 
                printf("*");
            else if ((j == 0 || j == n-1) && (i > 0 && i < n-1)) 
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        //n
        for (int j = 0; j <=n-1; j++) {
            if (j == 0 || j == n-1 || i == j) 
                printf("*");
            else
                printf(" ");
        }
        
        
        printf("\n"); 
    }

    return 0;
}
