//Write a C program to count total number of even and odd elements in an array.
#include<stdio.h>
int main(){
    int size=0;
    printf("How many numbers are you going to enter?\n");
    scanf("%d", &size);
    int a[size]={};
    printf("Enter the numbers:\n");
    for(int i=0;i<size;i++){
        printf("%d. ",i+1);
        scanf("%d",&a[i]);
    }
    int countEven=0, countOdd=0;
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    printf("The number of even elements are: %d\nThe number of odd elements are: %d", countEven, countOdd);
    return 0;
}