//You are given an array of integers. A majority element in an array is an element that appears more than ⌊n/2⌋ times, where n is the size of the array. Your task is to determine if the array contains a majority element. If it does, print the majority element; otherwise, print "No Majority Element".
#include <stdio.h>
#include<limits.h>
int findMajorElement(int a[], int n) {
    int freq[2000001] = {0}; 
    for (int i = 0; i < n; i++) {
        freq[a[i] + 1000000]++;
    }
    int min=n/2;
    for (int i = 0; i < n; i++) {
        if (freq[a[i] + 1000000] > min) {  
            return i;
        }
    }

    return -1;
}
int main() {
    int size=0;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int res = findMajorElement(a, size);
    if (res!=-1){
        printf("%d\n", a[res]);
    } 
    else {
        printf("No Majority Element\n");
    }

    return 0;
}