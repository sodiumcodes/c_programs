/*Rotating Numbers:
Write a program to perform the following operation on the given number N.
A number is transformed based on the following rules:
If the number has three or more digits and is a palindrome or a prime, follow these special rules:
    -If it is a palindrome, rotate its digits right by two positions.
    -If it is a prime, rotate its digits left by two positions.
    -If it is both prime and a palindrome, keep it unchanged.
Otherwise:
    -If the number is even, rotate its digits right by one position.
    -If the number is odd, rotate its digits left by one position.
*/
#include <stdio.h>
#include <math.h>
int checkPrime(int x){
    if(x%2==0 || x%3==0){
        return 0;
    }
    //checks if the number has prime factors other than 2 and 3;
    int i=5;
    while(i<=(x/i)){
        if(x % i ==0 || x % (i+2) ==0){
            return 0;
        }
        i+=6;
    }
    return 2;
}
int checkPalindrome(int digitts, int x){
    int digit= digitts/2;
    int a=0,b=0;
    //getting second half of the palindrome
    for(int i=1; i<=digit; i++){
        b= x%10;
        a=(a*10) + b;
        x/=10;
    }
    //if the number has even number of digits
    if(digitts%2==0){
        if(x==a){
            return 1;
        }
    }
    else{
        //getting rid of the middle digit
        x/=10;
        if(x==a){
            return 1;
        }
    }
    return 0;
}
int main() {
    int testcases=0;
    scanf("%d",&testcases);
    
    for(int i=1; i<=testcases;i++){
        
        int num=0;
        scanf(" %d",&num);
        
        int copyNum=num,digits=0, res=num;
        if(num>0){
            if(num<10){
                
            }
            else if(num<=99){
                //does the rotation for both even and odd numbers
                int a=copyNum%10;
                copyNum/=10;
                res=a*10+copyNum;
            }
            else{
                //counts the number of digits in num
                while(copyNum!=0){
                    digits++;
                    copyNum/=10;
                }
                copyNum=num;
                
                int prime= checkPrime(num);
                int palindrome= checkPalindrome(digits, num);
                int sum= prime + palindrome;
                
                int a=1;
                for(int i=1;i<=digits-2;i++){
                    a*=10;
                } 
                switch(sum){
                    case 1:
                    //number is palindrome
                            //extracting the last two digits
                            copyNum= copyNum%100;
                            //getting rid of the last two digits
                            num/=100;
                            //getting final number
                            res= copyNum * a + num;
                        break;
                    case 2:
                    //number is prime
                            //extracting the digits except the first two
                            copyNum= copyNum%a;
                            //getting rid of the digits other than the first two
                            num-= copyNum;
                            //getting rid of the zeros
                            num/=a;
                            //getting final number
                            res= copyNum *100 +  num;
                        break;
                    
                    case 3: 
                    //number is both prime and palindrome
                        break;
                    default:
                    //when number is neither prime nore 
                        digits-=1;
                        a=pow(10,digits);
                        //if num is odd
                        if(num%2){
                            //getting rid of the first digit
                            copyNum/=a;
                            //getting rid of the first digit from num
                            num-= (copyNum *a);
                            res= copyNum + (num* 10);
                        }
                        else{
                            //extracting the last digit
                            copyNum%=10;
                            //getting rid of the last digit from num
                            num/=10;
                            res= copyNum * a + num;
                        }
                }
            }
            printf("%d\n",res); 
        }
    }
    return 0;
}