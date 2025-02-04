//Write a program to print the squares of numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.
#include <stdio.h>

int main()
{   int n=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){  
        
            printf("%d ",i*i);
        }
    return 0;
}