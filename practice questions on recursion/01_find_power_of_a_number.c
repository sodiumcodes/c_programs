//Calculate the power of a number using recursion
#include <stdio.h>
int multiply(int a, int p){
    if(p==0){
        return 1;
    }
    return a* multiply(a,(p-1));
}
int main(){
    int testcases=0;
    scanf("%d",&testcases);
    for(int i=1;i<=testcases;i++){
        printf("Enter the number and power:\n");
        int num=0,power=0;
        scanf("%d %d",&num, &power);
        printf("The product is= %d\n", multiply(num, power));
    }
    return 0;
}