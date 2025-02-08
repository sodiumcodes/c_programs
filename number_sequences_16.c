/*A number is considered a Magic Number if the repeated sum of its digits eventually results in 1.
To determine if a number is a Magic number:
    -Calculate the sum of its digits.
    -If the result is a number with more than one digit, repeat the process until you are left with a single digit.
    -If the final single digit is 1, the number is a Magic number; otherwise, it is not.*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int copyNum=num,sum=0;
    if(num==0){
        printf("%d is not a magic number",num);
        return 0;
    }
    else if(num<10){
        if(copyNum==1){
            printf("%d is a magic number",num);
            
        }
        else{
            printf("%d is not a magic number",num);
            
        }
    }
    else{
        while(copyNum>10){
            while(copyNum!=0){
            int a=copyNum%10;
            copyNum=copyNum/10;
            sum+=a;
            }
            copyNum=sum;
            sum=0;
        }
        if(copyNum%10==0||copyNum==1){
            printf("%d is a magic number",num);
        }
        else{
            printf("%d is not a magic number",num);
        }
    }
    return 0;
}