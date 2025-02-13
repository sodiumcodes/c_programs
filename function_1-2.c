/*Goldbach's Conjecture asserts that every even integer greater than 2 can be expressed as the sum of two prime numbers.
Given an integer N, find the smallest prime pair of prime numbers (p, q) such that:
    -p + q = N
    -p and q are both prime numbers
    -p is the smallest prime in the pair (i.e., p ≤ q)
If no such pair exists, print "No Solution".*/

#include <stdio.h>
int findprime(int b){
    for(int i=b; i>=2;i--){
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

int main()
{
    int number;
    scanf("%d", &number);
    int prime1=0,prime2=number-2;
    int flag=0;
    if(number<=3){
        printf("No Solution");
        return 0;
    }
    else if(number%2==0){
        label:
        while(prime2>=prime1){
            prime2=findprime(prime2);
            // printf("prime2=%d\n",prime2);
            prime1=number-prime2;
            // printf("prime1=%d\n",prime1);
            if(prime1>=2){
                prime1 = findprime(prime1);
                if(prime1+prime2==number){
                    flag=1;
                    break;
                }
               else{
                    --prime2;
                    goto label;
                }
            }
            else{
                break;
            }
        }
        printf("%d %d\n",prime1,prime2);
        flag=1;
    }
    if(flag==0){
        printf("No Solution");
    }
    return 0;  
}