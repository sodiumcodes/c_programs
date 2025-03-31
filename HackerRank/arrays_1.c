//You are given an array of integers and an integer k. Your task is to implement a function rotateArray() that rotates the array by k positions. Rotation means that each element is shifted to the left by k positions, and the elements that "fall off" from the beginning are moved to the end of the array. If k is greater than or equal to the number of elements, the rotation should be performed modulo the array size.
#include <stdio.h>
void reverse(int arr[], int first, int last){
    while (first < last) {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}
// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
     if(k>n){
         k=k%n;
     }
    reverse(arr, 0, n-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1-k);
}



int main() {
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}