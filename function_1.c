/*Goldbach's Conjecture asserts that every even integer greater than 2 can be expressed as the sum of two prime numbers.
Given an integer N, find the smallest prime pair of prime numbers (p, q) such that:
    -p + q = N
    -p and q are both prime numbers
    -p is the smallest prime in the pair (i.e., p ≤ q)
If no such pair exists, print "No Solution".*/

#include <stdio.h>
int findprime2(int b){
    for(int i=b-1; i>=3;i--){
        int flag=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return 0;
}
int main(){
    int number;
    scanf("%d",&number);
    int prime1=0,prime2=number-2;
    int flag=0;
    if(number<=3){
        printf("No Solution");
        return 0;
    }
    else if(number==4){
        printf("2 2");
        return 0;
    }
    else if(number%2==0){
        while(prime2>=prime1){
            prime2=findprime2(prime2);
            prime1=number-prime2;
            int check=0;
            for(int i=2; i*i<=prime1; i++){
                if(prime1%i==0){
                    
                    check=1;
                    break;
                }
            }
            if(check==0){
                flag=1;
                break;
            }
        }
         printf("%d %d",prime1,prime2);
    }
    if(flag==0){
        printf("No Solution");
    }
}