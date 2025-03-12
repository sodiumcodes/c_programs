//Given an integer 𝑁, write a program to determine whether 𝑁 is a palindrome. A number is called a palindrome if it reads the same backward as forward.
#include <stdio.h>

int main()
{
    int num=0,rev=0;
    scanf("%d",&num);
    int copyNum = num;
    if(num>0){
        //logic for reversing the number
        while(copyNum!=0){
            //extracting the last digit
            int rem = copyNum%10;
            //revering the number digit by digit
            rev = rev*10+rem;
            //eliminating the last digit
            copyNum/= 10;
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