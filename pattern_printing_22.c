//You are given a number n. Print a square matrix pattern that follows a specific pattern:
//For n = 5, the outermost square has all 5's, the next square has 4's, the next one has 3's, and so on until the center where the value is 1
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for(int i=0; i<2*num-1; i++){
        for(int j=0; j<2*num-1; j++){
            int dist=0;
            if(i < j){
                dist=i;
            }
            else{
                dist=j;
            }
            if(!(dist<((2*num-1)-i))){
                dist= (2*num-1) -i-1;
            }
            if(!(dist<((2*num-1)-j))){
                dist= (2*num-1) -j-1;
            }
            printf("%d ", num-dist);
        }
        printf("\n");
    }

    return 0;
}
