//A number is called "almost prime" if it has exactly two prime factors (not necessarily distinct). Given an integer N, count how many numbers from 1 to N (inclusive) are almost prime.
#include <stdio.h>
int main(){
    int num=0,prime=0;
    scanf("%d", &num);
    if(num>3){
        for(int a=4; a<=num; a++){  
            int count=0, b=a;  
            for(int j=2; j*j<=a; j++){  
                while(b%j== 0 && count<3){
                    count++;  
                    b/=j; 
                }
                if(b==1){
                    break;
                }
            }
            if(b>1)
                count++;
            if(count==2){  
                prime++;
            }
        }
    }
    printf("%d", prime);
    return 0;
}