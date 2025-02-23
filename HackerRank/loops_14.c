/*Write a program to generate a Hailstone-like sequence for a given integer n based on the following rules:
If the number is divisible by 3, divide it by 3.
If the number is divisible by 5 and not divisible by 3, subtract 5.
If the number is less than 1, it becomes 1.
Otherwise, multiply the number by 5.
The sequence stops when the number reaches to 1.
Print the entire sequence, including the starting number and 1, and the maximum obtained number from the beginning untill it reaches 1.*/

#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    int max=a,n=a;
    
        printf("%d",a);
    
    while(n!=1){
        if(n<1){
            n=1;
        
        }
        else if(n%3==0){
            n=n/3;
            
        } 
    
        else if(n%5==0){
            n-=5;
            
        }
        else{
            n*=5;
            
        }
        
        if(n>max){
            max=n;
        }
        printf(" -> %d", n);
    }
    
           printf("\nMax Number: %d",max);
     
    return 0;
}