//You are given a 2D integer matrix of size N × M. Your task is to compute and print the sum of elements in each row of the matrix
#include <stdio.h>

int main() {

    int row=0, col=0;
    scanf("%d %d", &row, &col);
    int a[row][col];
    int sum[row];
    for(int i=0; i<row; i++){
        int res=0;
        for(int j=0; j<col ; j++){
            scanf("%d", &a[i][j]);
            res+=a[i][j];
        }
        sum[i]=res;
    }
    for(int i=0; i<row; i++){
        printf("%d ", sum[i]);
    }
    return 0;
}
