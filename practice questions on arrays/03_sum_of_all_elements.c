//Write a C program to find sum of all array elements.
#include <stdio.h>
int main()
{   
    int size=0;
    printf("Enter how many elements to be added: ");
    scanf("%d",&size);
    int a[size],sum=0;
    for(int i=0; i<size;i++){
        printf("Enter number- %d: ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("The sum of all elements is: %d\n",sum);

    return 0;
}