//You are given an array of integers and a target_sum. Your task is to find the pair of integers in the array whose sum is closest to the target sum. The pair should be decided in the order they appear in the array.
#include <stdio.h>
#include <stdlib.h>
void findTargetSum(int a[], int n, int target){
    int clstSum = 1000001;
    int num1 = 0, num2 = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int sum = a[i] + a[j];
            if (abs(target - sum) < abs(target - clstSum)){
                clstSum = sum;
                num1 = a[i];
                num2 = a[j];
            }
        }
    }
    printf("%d %d", num1, num2);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int target_sum;
    scanf("%d", &target_sum);

    findTargetSum(a, n, target_sum);
    
    return 0;
}
