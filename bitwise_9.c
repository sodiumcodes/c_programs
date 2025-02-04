//Given an integer n, write a program to isolate the rightmost set bit in its binary representation. All other bits should be turned off except the rightmost set bit. The result should be returned as an integer.

#include <stdio.h>

int main() {

        int n;
        scanf("%d", &n);
        int num= ~(n-1);
        int otpt=n&num;
        printf("%d", otpt);
        return 0;
}