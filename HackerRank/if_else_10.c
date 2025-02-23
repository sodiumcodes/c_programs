/*
Three contenders— X, Y, and Z are facing off in a duel of divisibility. Your task is to determine the result of this epic showdown by analyzing the relationship between X and its challengers, Y and Z. The rules of the duel are as follows:
If X is divisible by Y, the output should be "Y triumphs over X!".
If X is divisible by Z, the output should be "Z outsmarts X!".
If X is divisible by both Y and Z, the output should be "X defeats all!".
If X is not divisible by either Y or Z, the output should be "X remains undefeated!".
*/

#include <stdio.h>

int main()
{
    int X, Y, Z;
    scanf("%d %d %d", &X,&Y,&Z);
        if(X%Y==0 && X%Z==0 ){
            printf("X defeats all!");
        }
        else if(X%Y==0){
            printf("Y triumphs over X!");
        }
        else if(X%Z==0){
            printf("Z outsmarts X!");   
        }
        else{
            printf("X remains undefeated!");
        }
    
    return 0;
}