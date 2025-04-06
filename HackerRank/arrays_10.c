//You are given an array of integers. Your task is to find the first repeating element in the array. An element is considered "repeating" if it occurs more than once. If multiple elements repeat, the answer is the one whose first occurrence appears earliest in the array. If no element repeats, print "No Repeating Element".
#include <stdio.h>
int firstRepeating(int a[], int n) {
    int freq[2000001] = {0}; 
    for (int i = 0; i < n; i++) {
        freq[a[i] + 1000000]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[a[i] + 1000000] > 1) {  
            return a[i];  
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
    int res = firstRepeating(a, size);
    if (res!=-1) {
        printf("%d\n", res);
    } 
    else {
        printf("No Repeating Element\n");
    }

    return 0;
}