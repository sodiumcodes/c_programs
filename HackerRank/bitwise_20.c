//Write a program to determine whether two given integers a and b are complementary. Two numbers are complementary if every bit in a is the opposite of the corresponding bit in b.
#include <stdio.h>

int main()
{   int n1, n2;
    scanf("%d %d", &n1, &n2);
  
    int A= ~n1;
    
    if (A!=n2)
    printf("NO");
    else printf("YES");
    return 0;
}
