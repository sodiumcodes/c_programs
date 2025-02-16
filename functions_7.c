//Implement a function find_most_frequent_digit(n) that returns the most frequent digit in a given number n. If there is a tie in frequency, return the largest of those digits

#include <stdio.h>
//counts the number of times a digit appears in n
int count_digits(int n, int digit){
    int count=0;
    while(n>=1){
        if(n%10==digit){
            count++;
        }
        n/=10;
    }
    return count;
}
int find_most_frequent_digit(int n) {
    int res=0, maxCount=0;
    if(n==0){
        return 0;
    }
    while(n>=1){
        int digit= n%10;
        int count= count_digits(n, digit);
        //count > maxCount : ensures that which ever digit comes more number of times is choosen
        //count == maxCount && digit > res : ensures that if two distinct digits are appearing equal number of times ,           //then the larger digit is chosen
        if( count > maxCount || (count == maxCount && digit > res) ){
            maxCount=count;
            res = digit;
        }
        count=0;
        n/=10;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", find_most_frequent_digit(n)); 
    return 0;
}