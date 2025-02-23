//Given an integer 𝑁, write a program to determine whether 𝑁 is a palindrome. A number is called a palindrome if it reads the same backward as forward.
#include <stdio.h>

int main()
{
    int num=0,rev=0;
    scanf("%d",&num);
    int a=num;
    if(num>0){
        while(a!=0){
            int rem=a%10;
            rev=rev*10+rem;
            a/=10;
        }
        if(num==rev){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}