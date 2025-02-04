//Given a decimal integer N, convert it into its binary representation without using built-in conversion functions. The output should display only the used bits (ignoring any leading or padding zeros).
#include <stdio.h>
int main(){
    int num=0,a=0,rem=0,bin=0,place=1;
    scanf("%d", &num);
    a=num;
    while(a!=0){
        rem=a%2;
        bin+=rem*place;
        place*=10;
        a/=2;
    }
    printf("Binary equivalent of %d: %d", num,bin);
    return 0;
}