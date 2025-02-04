/*Write a program to print an Up Arrow pattern based on the input size n, where n represents the total number of rows of the pattern.
The pattern consists of two parts:
-The first part has n/2 rows, forming the head of the arrow.
-The second part has n/2 rows, forming the tail of the arrow.*/

#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
     if(n%2==1){
        n++;
    }
    if(n>2){
        for(int i=1;i<=n;i++){
            for(int k=1; k<=(n/2)-i;k++){
                    printf(" ");
                }
            if(i<=n/2){
                
                for(int j=1;j<=2*i-1;j++){
                    if(j==1||j==(2*i-1)/2 +1||j==2*i-1){
                        printf("*");
                    }
                    else{
                        printf(" "); 
                    }
                }
                printf("\n");
            }
            else{
                
                for(int j=1;j<=2*i-1;j++){
                    if(j==n/2){
                        printf("*");
                    }
                    else{
                        printf(" "); 
                    }
                }
                printf("\n");
            }
        }
    }

    else{
        printf("Shape Not Possible"); 
    }

    return 0;
}
