//Given an integer N, print all cyclic rotations of the number N. A cyclic rotation involves shifting the digit in the one's place to the leftmost, and moving all other digits one place to the right. The rotations continue until the original number is reached again.
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int digits=0,multiply=1,res=num;
    while(num>0){
        digits++;
        multiply*=10;
        num/=10;
    }
    multiply/=10;
    for(int i=1;i<=digits;i++){
        int rem=res%10;
        res/=10;
        res= rem*multiply+res;
        printf("%d\n",res);
    }
    
    return 0;
}