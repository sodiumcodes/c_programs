/*Write a program to generate a triangular number pattern with n rows based on the following rules:
-The pattern starts with the number 1 in the first row.
-Each subsequent row contains numbers in reverse order, starting from the next number in the sequence.
-The number of elements in each row decreases sequentially.
-The pattern continues for n rows.
For a given integer n, print the pattern as described.*/


#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int a=0;
    if(n>0) {
        for(int i=1; i<=n; i++) {
            
            a+=i;
            printf("%d ",a);
            int b=a;
            for(int j=1; j<i; j++){
                int count=1;
                if(count<i)
                printf("%d ", --b);
                count++;
            }
            printf("\n");
        }
    }
    
    return 0;
}
