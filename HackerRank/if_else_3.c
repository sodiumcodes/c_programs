//Write a program that checks if a given year is a leap year or not, outputs the result in a specific format, and handles invalid years as well.
#include <stdio.h>
int main() {

    int year;
    scanf("%d", &year);
    if(year>0){
         if(year%4==0 && year%100!=0 || year%400==0){
        printf("Yes, %d is a leap year.", year);
    }
     else{
        printf("No, %d is not a leap year.",year);
    }
    }
  
    else{
    printf("The given year %d is Invalid year.", year);
    }
    return 0;
}