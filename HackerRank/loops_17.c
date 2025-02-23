/*
You are given two integers x and y. The variable t in this problem represents the number of test cases. Each test case is independent and consists of two numbers x and y. For every test case, the program must determine whether there exists an integer n such that:
    -S(n) = x
    -S(n+1) = y
where S(a) denotes the sum of the digits of the number a in the decimal numeral system.
The program processes each test case one after another and outputs either "Yes" (if such an n exists) or "No" (if no such n is found).
*/
#include <stdio.h>
int main()
{   
    int testcases=0;
    scanf("%d",&testcases);
    for(int i=1;i<=testcases;i++){
        int x=0,y=0;
        scanf("%d %d",&x,&y);
        int k=x-y+1;
        if(x+1==y){
            printf("Yes\n");
        }
        else if(k>0 && k%9==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}