//Write a C program to right rotate an array.
#include<stdio.h>
int main(){
    int size=0;
    printf("How many elements are you going to enter?\n");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++){
        printf("%d. ",i+1);
        scanf("%d",&a[i]);
    }
    int right=0,x=0;
    printf("By how many elements do you want to move it to the right?\n");
    scanf("%d",&right);
    for(int i=0; i<right; i++){
        x=a[size-1];
        for(int j=size-2;j>=0;j--){
            a[j+1]=a[j];
        }
        a[0]=x;
    }
    printf("The elements after moving them towards right are:\n");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;   
}