//Write a program to generate the first n terms of a sequence where the numbers alternate between positive and negative integers, starting with 1.
#include <stdio.h>

int main()
{   int n=0;
    scanf("%d",&n);
    if(n==0){
        printf(" ");
        return 0;
    }
  for(int i=1;i<=n;i++){
        if(i%2==0) printf("%d ",-i);
        else printf("%d ",i);
    }
  
     return 0;
}
