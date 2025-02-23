//Write a program to find the sum of prime factors of a given integer. It is guaranteed that every positive integer can be written as a product of its prime factors. A prime factor is itself a prime number; multiplying all the prime factors of a number should yield the number itself.
#include <stdio.h>
int main() {
  int n = 0;
  scanf("%d", &n);
  int flag=0,a=n,num = 0, product = 1, sum = 0;
    if(n>1){
    for (int i = 2; i*i <= n; i++) {
        for(int j=2;j<=n/2;j++){
            if (a % j == 0) {
              num = j;
              product *= num;
              sum += num;
              a/= j;
              flag=1;
              break;
            }
    
            if(product == n) 
            {
                break;
            }
        }
    }
    if(flag==0){
        sum=n;
    }
  
    printf("%d\n", sum);
    }
    return 0;
}