//Write a program to clear the rightmost set bit of an integer n. The result should be the number obtained after flipping the rightmost set bit to 0 while leaving other bits unchanged.

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
        int num= n-1;
        int otpt=n&num;
        printf("%d", otpt);
    
    return 0;
}