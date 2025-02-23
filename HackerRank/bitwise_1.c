//Write a program to determine whether a given integer N is even or odd using only bitwise operators.
#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);
    int num= n<<i;
    int otpt=num|1;
    if(otpt==num){
    printf("Odd");
    }
    else if(otpt==num+1){
    printf("Even");
    }
    return 0;
}