//Write a C program to count total number of even and odd elements in an array
#include <stdio.h>
int main()
{
    int size=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter element- %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int countEven=0, countOdd=0;
    for(int i=0;i<size;i++){
        if(a[i] % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    printf("The number of odd elements are %d and even elements are %d.", countOdd, countEven);
}
