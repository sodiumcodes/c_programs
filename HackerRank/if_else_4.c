/*A user consumes a certain number of electricity units, and the electricity bill is calculated as follows:

For units ≤ 100: The rate is ₹5 per unit.
For units > 100 and ≤ 300: The rate is ₹7 for the remaining units.
For units > 300: The rate is ₹10 for units above 300.
Additionally, if the total bill amount is ₹1,200 or less, a 10% discount is applied to the bill.

Write a program to compute the total electricity bill based on the given number of units and handles invalid input as well.
*/
#include <stdio.h>
int main()
{
    int n;
    float amt=0.00;
    scanf("%d", &n);
    if(n>=0){
    if(n<=100){
        amt=n*5;
    }
    else if(n>100 && n<=300){
        amt=500+((n-100)*7);
    }
    else if(n>300){
        amt=500+1400+((n-300)*10);
    }
    if(amt<=1200){
        float discount= 0.1*amt;
        float total_amt= amt- discount;
        printf("The electricity bill is: %.2f.", total_amt);
    }
    else{
        printf("The electricity bill is: %.2f.", amt);
    }
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}