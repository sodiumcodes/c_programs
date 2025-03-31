//You are given an array of integers. Your task is to implement a function that reverses the order of the elements in the array in-place. You do not need to return anything.
#include <stdio.h>
void reverseArray(int arr[], int n) {
    int first=0, last=n-1;
    while(first<last){
        int temp= arr[last];
        arr[last]=arr[first];
        arr[first]= temp;
        first++; 
        last--;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}