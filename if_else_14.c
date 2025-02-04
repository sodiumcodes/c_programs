/*Write a C program to classify an integer N into one of the following categories based on specific conditions:
Categories:
Category A: N is divisible by 2 and 3 but not divisible by 5.
Category B: N is greater than 20 and is the product of two distinct prime numbers within the range of [2,11].
Category C: N is divisible by either 3 or 7 but not both, and N is a two-digit number.
Category D: N is a perfect square less than 200.
Category E: If none of the above conditions are satisfied.
Note: Output the category that comes first in lexicographic order.*/

#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
     if(N>=-1000&&N<=1000){
     if(N%6==0 && !(N%5==0)){
        printf("A");
    }
      else if(N>20 && (N==21||N==33||N==14||N==10||N==15||N==22||N==6)){
    printf("B");
    }
     else if((N>=10 && N<100) && (N%3==0 || N%7==0) && !(N%3==0 && N%7==0) ){
    printf("C");
    }
    else if(N>0 && (N==1|| N==4||N==9|| N==16|| N==25|| N==36|| N==49|| N==64||N==81|| N==100|| N==121|| N==144|| N==169|| N==196)){
    printf("D");
    }
       
    else{
    printf("E");
    }
     }
    return 0;
}