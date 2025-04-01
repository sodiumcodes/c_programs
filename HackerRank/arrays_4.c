//Complete the function findSecondLargest() which takes an array of integers and its size as input and returns the second largest element in the array. If there is no second largest element, return -1.
#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    if(n<2){
        return -1;
    }
    int largest= INT_MIN;
    int secondLargest= -1;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest=arr[i];
            // printf("%d %d\n",largest, secondLargest);
        }
        else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest =arr[i];
        }
        
    }
   return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}