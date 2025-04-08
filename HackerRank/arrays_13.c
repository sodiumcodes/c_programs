///You are given an array of integers and a target_sum. Your task is to find the first pair of integers in the array whose sum is equal to the target sum. The pair should be printed in the order they appear in the array.
#include <stdio.h>
int b[2];
int findPair(int a[], int size, int target){
    for(int i=0; i<size-1;i++){
            int c = target- a[i];        
            for(int j=i+1; j<size; j++){
                if(a[j]==c){
                    b[0]=a[i];
                    b[1]=a[j];
                    return 1;
                }
            }
        
    }
    return 0;
}
int main() {

    int size=0;
    scanf("%d", &size);
    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    int target =0;
    scanf("%d", &target);
    if(findPair(a, size, target)){
        printf("%d %d", b[0], b[1]);
    }
    else{
        printf("-1");
    }
    return 0;
}