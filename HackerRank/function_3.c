//Implement a function find_unique_digit_product(n) that returns the product of the unique digits present in the given number n. The product should only consider distinct digits, ignoring any repeating digits.

#include <stdio.h>
int find_unique_digit_product(int n) {
    if(n==0){
        return 0;
    }
    else{
        int res=1;
        while(n>=1){
            int a=n%10;
            if(a==0){
                return 0;
            }
            int copyN=n/10;
            int count=0;
            while(copyN>=1){
                int y=copyN%10;
                if(a==y){
                    count++;
                    break;
                }
                copyN/=10;
            }
            if(count==0){
                res*=a;

            }
            else{
                 n/=10;
                continue;
            }
            n/=10;
        }
        return res;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}