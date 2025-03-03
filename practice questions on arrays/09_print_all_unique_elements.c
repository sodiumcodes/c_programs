//Write a C program to print all unique elements in the array.
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
    for(int i=0; i<size; i++){
        int x=a[i],count=0;
        for(int j=i; j<size; j++){
            if(x==a[j]){
                count++;
            }
        }
        if(count==1){
            printf("%d\n",a[i]);
        }
    }
    return 0;
}