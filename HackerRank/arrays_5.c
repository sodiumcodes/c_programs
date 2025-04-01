//You are given a sorted array of integers. Your task is to modify the array in-place to remove duplicate elements so that each unique element appears only once.The function should not return anything; instead, it must modify the given array itself.
#include <stdio.h>

void removeDuplicates(int arr[], int *n){
    int count=0;
	for (int i = 0; i < *n; i++) {
        if(arr[i]!=arr[count]){
            count++;
            arr[count]= arr[i];
       }
    }
    *n=count+1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); // Print new size

    return 0;
}