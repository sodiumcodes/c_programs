//An Evil Number is a number that has an even number of 1s in its binary representation. Write a function is_evil_number(n) that returns 1 if the number n is an Evil Number and 0 otherwise.
#include <stdio.h>

int is_evil_number(int n) {
    int count=0,digits=0;
    int x=n;
    while(x!=0){
        digits++;
        x/=2;
    }
    for(int i=1; i<=digits; i++){
        int a = n & 1;
        n = n >> 1;
        if(a){
             count++;
        }
    }
    if(count % 2){
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}