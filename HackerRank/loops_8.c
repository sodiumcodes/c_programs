// /Write a program to generate the series 1, 4, 9, 16, 25, ... of N numbers, but skip the numbers that are divisible by 3.
#include <stdio.h>

int main()
{   
    int n=0;  
    scanf("%d",&n);
    int num=0;  
    for (int i=1; num<n; i++) {  
        if (i % 3 != 0) {  
            printf("%d ", i*i);
            num++;
        }
    }
    return 0;
}