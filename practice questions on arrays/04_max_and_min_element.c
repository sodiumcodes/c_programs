//Write a C program to find maximum and minimum element in an array.
#include <stdio.h>
int main()
{   
    int size=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0; i<size;i++){
        printf("Enter number- %d: \n",i+1);
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0; i<size;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("The maximum element is: %d\n",max);
    printf("The minimum element is: %d\n",min);
    return 0;
}