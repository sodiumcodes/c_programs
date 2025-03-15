//There is a city named Asthana in Russia in which there is a colony named Rubia. There are two friends from a different colony have decided to rob the gold from the Rubia colony. You can visualise this colony as a grid of N x M where i th (1<=i<=N) row and j th (1<=i<=M) column is a house which has grid[i][j] kgs of gold. But the first thief can move in any one row of the colony and rob the gold from it and the second thief can move in any one column of the colony and rob the gold from it. As they were friends after collecting gold they will divide it equally. Find the maximum kgs of gold they both together can collect.
#include <stdio.h>
int main() {
    int testcases;
    scanf("%d", &testcases);

    while (testcases--) {
        int rows, cols;
        scanf("%d %d", &rows, &cols);

        int a[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        long long maxRowSum = 0, maxColSum = 0, b=0;

        for (int i = 0; i < rows; i++) {
            long rowSum = 0;
            for (int j = 0; j < cols; j++) {
                rowSum += a[i][j];
            }
            if (rowSum > maxRowSum) {
                maxRowSum = rowSum;
                b=i;
            }
            
        }

        for (int j = 0; j < cols; j++) {
            long colSum = 0;
            for (int i = 0; i < rows; i++) {
                if(!(b==i)){
                    colSum += a[i][j];
                }
            }
            if (colSum > maxColSum) {
                maxColSum = colSum;
            }
        }
        printf("%lld\n", maxRowSum + maxColSum);
    }

    return 0;
}