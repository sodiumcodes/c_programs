//Given an array of integers that may contain duplicate elements and an integer K, your task is to find the Kth smallest element in the array without using a sorting algorithm. Instead of sorting the entire array, solve the problem using an efficient algorithm.
#include <stdio.h>
#include<limits.h>
int kthSmallest(int arr[], int n, int k) {
    int min=INT_MIN;
    int count=1;
    while(count<=k){
        int newMin=INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]>min && arr[i]<newMin){
                newMin= arr[i];
            }
        }
        min = newMin;
        count++;
    }
    return min;
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}