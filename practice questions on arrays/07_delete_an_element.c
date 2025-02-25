//Write a C program to delete an element from an array at specified position.
#include <stdio.h>
int main()
{
    int size=0,position=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter element- %d: ",i+1);
        scanf("%d",&a[i]);
    }
    input:
    printf("Enter which position's element to be deleted: ");
    scanf("%d",&position);
    if(position<=0 || position>size){
        printf("Invalid Input!!\n");
        goto input;
    }
    for(int i=position-1;i<size;i++){
            a[i]= a[i+1];
    }
    size--;
    printf("The elements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}