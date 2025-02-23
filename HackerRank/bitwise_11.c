//Write a program to check if two integers a and b differ by exactly one bit using bitwise operators. Two numbers differ by exactly one bit if their binary representations differ in only one position.

#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int num = n1 ^ n2;  
    if (num && !(num & (num - 1))) printf("Yes");
    else printf("No");
    return 0;
}