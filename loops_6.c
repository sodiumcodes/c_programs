//Write a program to generate the first n terms of an Arithmetic Progression (AP). The first term a and the common difference d are provided.
#include <stdio.h>
int main()
{   
    int n=0, a=0, d=0;  
    
    scanf("%d",&n);
    scanf("%d %d",&a,&d);
    
    for(int i=1; i<=n; i++) {  
        int res= a+((i-1)*d);
        printf("%d ",res);
    }
    
    return 0;
}