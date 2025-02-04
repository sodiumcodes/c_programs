//If-Else_Tax Calculator
#include <stdio.h>
int main() {

    float inc;
    float tax=0;
    scanf("%f", &inc);
    if (inc<=250000 && inc>= 0){
        printf("%.2f", tax);
    }
    else if (inc>250000 && inc<=500000){
        tax=0.05* (inc- 250000) ;
        printf("%.2f", tax);
    }
    else if (inc>500000 && inc<=1000000){
        tax=0.05* 250000 + (0.2*(inc-500000));
        printf("%.2f", tax);
    }
    else if (inc>1000000 && inc<= 10000000 ) {
        tax=0.05* 250000 + 0.2 *500000 + (0.3 * (inc - 1000000));
        printf("%.2f", tax);
    }
    else{
    printf("INVALID");
    }
    return 0;
}