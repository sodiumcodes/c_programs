//Write a C program to left rotate an array.
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
    int left=0,x=0;
    printf("By how many elements do you want to move it to the left?\n");
    scanf("%d",&left);
    for(int i=0; i<left; i++){
        x=a[0];
        for(int j=0;j<size-1;j++){
            a[j]=a[j+1];
        }
        a[size-1]=x;
    }
    printf("The elements after moving them towards left are:\n");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;   
}