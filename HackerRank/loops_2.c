//Write a program to print all even numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.
#include <stdio.h>

int main()
{   int n=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){  
        if(i%2==0){
            printf("%d ",i);}
        }
    return 0;
}