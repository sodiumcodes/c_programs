//You are given two sorted arrays of integers. Your task is to merge these two arrays into a single sorted array that contains all the elements from both arrays. The resulting array should maintain non-decreasing order.
#include <stdio.h>
#include<limits.h>
void sortArray(int mergeArr[], int c,int a[], int m, int b[], int n){
    int x=0;
    int i=0, j=0;
    for(i=0, j=0; i<m && j<n;){
        if(a[i]==b[j]){
            mergeArr[x++]= b[j];
            mergeArr[x++]= b[j++];
            i++;
        }
        else if(a[i]>b[j]){
            mergeArr[x++]= b[j];
            j++;
        }
        else if(a[i]<b[j]){
            mergeArr[x++]= a[i];
            i++;
        }
    }
    while (i < m) mergeArr[x++] = a[i++];  
    while (j < n) mergeArr[x++] = b[j++]; 
    
}
int main() {
    int m=0;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    int n=0;
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int c=m+n;
    int mergeArr[c];
    sortArray(mergeArr, c, a, m, b, n);
    for (int i = 0; i < c; i++) {
        printf("%d ", mergeArr[i]);        
    } 
    return 0;
}