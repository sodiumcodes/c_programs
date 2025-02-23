/*Given an integer N, write a program to count the number of twin prime pairs that exist in the range [1, N] (inclusive).
A twin prime pair is defined as two prime numbers (p, q) where:
    -p and q are both prime numbers.
    -q = p + 2, i.e., the two primes differ by exactly 2.
    -(p, q) and (q, p) should be counted as the same pair, so you should only count one of them.*/

#include <stdio.h>
int prime(int x){
    for(int i=2; i*i<=x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,a=0,count=0;
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
        if(prime(i)){
            if(i-a==2){
                count++;
            }
            a=i;
        }
    }
    printf("%d",count);
    return 0;
}
