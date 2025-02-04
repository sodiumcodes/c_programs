/*An integer n is said to have exactly one set bit if its binary representation contains only a single 1. Write a program to check:
If n has exactly one set bit, return 1.
If n has more than one set bit or n is non-positive, return -1.*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
   
   if(num>0 && (num & (num-1)) == 0){
        printf("1");
   }
    else if(num>0 && !(num & (num-1)) == 0){
        printf("-1");
   }
    else if(num<=0){
        printf("-1");
    }
    
    return 0;
}