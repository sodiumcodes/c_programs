//Write a C program to find second largest element in an array.
#include <stdio.h>
int main()
{   
    int size=0;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int a[size], largest=0;;
    for(int i=0; i<size;i++){
        printf("Enter number:- %d: \n",i+1);
        scanf("%d",&a[i]);
        if(a[i]>largest){
            largest=a[i];
        }
    }
    int secondLargest=a[0];
    for(int i=0; i<size;i++){
        if(a[i]<largest){
            if(secondLargest<a[i]){
                secondLargest=a[i];
            }
        }
    }
    printf("The second largest element is: %d\n",secondLargest);
    return 0;
}