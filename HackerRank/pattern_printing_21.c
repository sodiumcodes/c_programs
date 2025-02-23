/*Write a program to generate a number pattern with n rows based on the following rules:
-The pattern consists of n rows.
-Each row contains a series of odd numbers that follow a sequential order.
-Each row has odd numbered columns with numbers which too increases sequentially.
-The middle column of each row consists of the summation of the odd numbers in that row.
-The numbers in each row are separated by a single space.
For a given integer n, print the pattern as described.*/

#include <stdio.h>

int main()
{   int a=3;
    int n=0,num=1,res=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        
        
        for(int j=0;j<=2*n-1;j++){
            
            if(i+j<n-1)
                printf("  ");
            else if(i+j>=n && j-i<=n && i<=n) {
                int c=2*n-1;
                // if(j==n && i==1){
                //     printf("%d ",a);
                //     a=a+2;
                // }
            
                if(j<=c/2){
                    printf("%d ",a);
                    a=a+2;
                }
                
                else if (j>(c/2)+1){
                    printf("%d ",a);
                    a=a+2;
                }
                
                else{
                    for(int m=1;m<=2*(i+1)-2;m++){
                        num+=2;
                        res+=num;
                    } 
                    printf("%d ",res);
                    res=0;
            }
        }
        }
        printf("\n");
        
    }
    return 0;
}