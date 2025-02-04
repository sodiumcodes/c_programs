//Write a program to generate a sequence of n terms where each term is double the previous one, starting from 1.
#include <stdio.h>
int main()
{   
    int n=0;  
    scanf("%d",&n);
     if(n==0){
         printf(" ");
        return 0;
    }
    else if (n>0 && n<36) {
    printf("<");
    for(int i=0; i<=n-2; i++){  
        int res=1<<i;
        printf("%d ", res);
    }
    int res=1<<(n-1);
    printf("%d>", res);
    }
    return 0;
}