/*You are tasked with building a small utility program for a calendar management system. The program should determine the number of days in a specific month of a given year. It must also handle invalid inputs gracefully*/

#include <stdio.h>
int main()
{
    int year, month;
    scanf("%d\n%d", &month, &year);
    if(month<=0 || month>12){
        printf("Invalid Month\n");
    }
    if (year<=0){
        printf("Invalid Year");
        return 0;
    }
    if(month==2){
        if((year%4==0 && year%100!=0) || year%400==0){
            printf("29");
        }
        else{
            printf("28");
        }
    }
    else{
    switch(month){
        case 1:printf("31");
        break;
        case 3:printf("31");
        break;
        case 4:printf("30");
        break;
        case 5:printf("31");
        break;
        case 6:printf("30");
        break;
        case 7:printf("31");
        break;
        case 8:printf("31");
        break;
        case 9:printf("30");
        break;
        case 10:printf("31");
        break;
        case 11:printf("30");
        break;
        case 12:printf("31");
        break;
       
    }
    }
    return 0;
}