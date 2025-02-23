//Write a C program to print all negative elements in an array.
#include <stdio.h>
int main()
{   
    int size=0;
    printf("Enter how many numbers to be printed: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size;i++){
        printf("Enter number- %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The negative numbers are:\n");
    for(int i=0; i<size;i++){
        if(a[i]<0){
            printf("%d\n",a[i]);
        }
    }
    return 0;
}