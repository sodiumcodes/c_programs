//A Smith number is a composite number where the sum of its digits is equal to the sum of the digits of its prime factors (excluding the number itself). Write a function is_smith_number(n) that returns 1 if the given number n is a Smith number, otherwise returns 0.
#include <stdio.h>
int digits(int x){
    int sumPRime=0;
    while(x!=0){
        int digitP=x%10;
        sumPRime+=digitP;
        x/=10;
    }   
    return sumPRime;
}
int primeCheck(int n){
        for(int j=2; j*j<=n;j++){
            if(n%j==0){
                return 1;
            }
        }
    return 0;
}
int is_smith_number(int n) {
    
    if(primeCheck(n)){
        if(n>=1){
            int a=n;
            int sumPrime=0,sumDigits=0;
            for(int i=2;n!=1;i++){
                for(int j=2; j<=n;j++){
                    if(n%j==0){
                        if(j>10){
                        int y=j;
                            sumPrime+=digits(y);
                        }
                        else{
                            sumPrime+=j;
                        }
                        n=n/j;
                        break;
                    }
                }
            }
            sumDigits+=digits(a);
             
            if(sumPrime== sumDigits){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}