//Write a program to print a 01 Right Triangle pattern based on the input size n. The triangle has n rows, where each row alternates between 1 and 0. The first row contains only 1, and each subsequent row starts alternating from the opposite digit of the first element in the previous r
#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    if(n>0){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(i%2==0){
                    if(j%2==0){
                        printf("1");
                    }
                    else{
                        printf("0");
                    }
                }
                else{
                    if(j%2==0){
                        printf("0");
                    }
                    else{
                        printf("1");
                    }
                }
            }
              printf("\n");
        }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}
