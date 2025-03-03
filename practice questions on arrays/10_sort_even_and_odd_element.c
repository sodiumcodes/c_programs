//Write a C program to input elements in an array from user and sort all even and odd elements of the given array.
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
    int copySize=size;
    int b[size];
    //sorting elements in ascending order.
    while(copySize!=0){
        for(int j=0;j<size;j++){
            int x=0;
            int num=a[0];
            for(int i=0;i<copySize;i++){
                
                if(num>a[i]){
                    num=a[i];
                    x=i;
                }
            }
            for(int i=x; i<size-1; i++){
                a[i]=a[i+1];
            }
            b[j]=num;
            copySize--;
        }
        
    }
    int countEven=0, countOdd=0;
    //to count the number of even and odd elements. 
    for(int i=0; i<size; i++){
        if(b[i]%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    printf("The sorted elements are:\n");
    //the order in which elements will be printed will depend on whether even elements are more or odd elements.
    if(countEven>countOdd){
        for(int i=0; i<size; i++){
            if(b[i]%2==0){
                printf("%d ",b[i]);
            }
        }
        for(int i=0; i<size; i++){
            if(b[i]%2){
                printf("%d ",b[i]);
            }
        }
    }
    else{
        for(int i=0; i<size; i++){
            if(b[i]%2){
                printf("%d ",b[i]);
            }
        }
        for(int i=0; i<size; i++){
            if(b[i]%2==0){
                printf("%d ",b[i]);
            }
        }
    }
    return 0;
}
