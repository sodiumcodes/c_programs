/*
Your task is to create a program that simulates the enchanted mirror. Based on the input number, the program should output the mirror's verdict.
A number can hold one of several mystical statuses based on the following conditions:

Condition 1: The number is even and greater than 10.
Condition 2: The number is greater than 15 and a multiple of 3.
Condition 3: The number is a multiple of 7.
*/

#include <stdio.h>

int main() {
    int num;
   scanf("%d", &num);
    
    
    if (num <= 0) {
        printf("The verdict for the number %d is: INVALID\n", num);
    }
    else{
        int condition = 0;
        if(num % 2 == 0 && num > 10){
        condition++;
        }
    
        if(num > 15 && num % 3 == 0){
        condition++;
        }
    
        if(num % 7 == 0){
        condition++;
        }
        switch(condition){
            case 3:printf("The verdict for the number %d is: SUPERNATURAL", num);
            break;
            case 2:printf("The verdict for the number %d is: MIRACULOUS", num);
            break;
            case 1:printf("The verdict for the number %d is: MAGICAL",num);
            break;
            default:printf("The verdict for the number %d is: NORMAL", num);
        }
    }
    return 0;
}