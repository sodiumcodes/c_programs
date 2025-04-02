//You are given an array of integers. Your task is to implement a function that moves all the zeros to the end of the array in-place, while maintaining the relative order of the non-zero elements. You do not need to return anything.
#include <stdio.h>
void moveArrayElements(int a[], int n, int j){
    for(int i=j;i<n ; i++){
        a[i]=a[i+1];
    }
}

void moveZerosToEnd(int arr[], int n) {
    int array[n];
    int count=0;
    for(int i=0; i<n ; i++){
        array[i]=-1;
        if(arr[i]==0){ 
            array[i]=i;
            count++;
        }
    }
    for(int i=n-1; i>=0 ; i--){
        if(array[i]!=-1){ 
            moveArrayElements(arr, n, i);
        }
    }
    int i=n-1;
    while(count>0){
        arr[i]=0;
        i--;
        count--;
    }
    
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}