//Given a number n and a position i, write a program to unset the i-th bit of n using bitwise operators.
#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);
    if(i>=0 && i<=31){
        int num= ~(1<<i);
        int otpt=n&num;git
        printf("%d", otpt);
    }
    return 0;
}