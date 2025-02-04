//Write a program to print the first n odd numbers, starting from 1, in reverse order. The odd numbers should be printed starting from the largest odd number in the sequence, moving backwards to the smallest odd number.
#include <stdio.h>
int main()
{   
    int n=0;  
    scanf("%d",&n);
     if (n==0) 
    {
        printf(" "); 
        return 0;
    }
    for(int i=2*n-1; i>=3; i--) {  
        if(i%2==1)
        printf("%d ", i);
    }
    printf("1.");
    return 0;
}