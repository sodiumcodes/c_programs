/*
You are given two sorted arrays of integers. Your task is to find:

Union: A sorted array containing all unique elements from both arrays.
Intersection: A sorted array containing only the common elements from both arrays.
You must write a code which takes two array inputs and outputs union and intersection of two arrays, if possible.
*/
#include <stdio.h>
#include<limits.h>
int unionFunc(int unionn[], int c, int setA[], int a, int setB[], int b, int inter[], int *add){
    int x=0, y=0;
    int i=0, j=0;
    int count=0;
    for(i=0, j=0; i<a && j<b;){
        if(setA[i]==setB[j]){
            unionn[x++]= setB[j];
            inter[y++]= setB[j];
            i++;
            j++;
            count++;
        }
        else if(setA[i]>setB[j]){
            unionn[x++]= setB[j];
            j++;
        }
        else if(setA[i]<setB[j]){
            unionn[x++]= setA[i];
            
            i++;
        }
    }
    while (i < a) unionn[x++] = setA[i++];  
    while (j < b) unionn[x++] = setB[j++]; 
    *add -=count;
    return count;
    
}
int main() {
    int a=0;
    scanf("%d", &a);
    int setA[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &setA[i]);
    }
    int b=0;
    scanf("%d", &b);
    int setB[b];
    for (int i = 0; i < b; i++) {
        scanf("%d", &setB[i]);
    }
    int c=a+b;
    if(c>0){
        int unionn[c];
        int size= (a>b)?a:b;
        int inter[size];
        int count= unionFunc(unionn, c, setA, a, setB, b, inter, &c);
        for (int i = 0; i < c; i++) {
            if(i==0|| unionn[i]!=unionn[i-1]){
                printf("%d ", unionn[i]);
            }        
        }
        printf("\n");
        if(count){
            for(int i=0; i<count; i++){
                if(i==0|| inter[i]!=inter[i-1]){
                    printf("%d ", inter[i]);   
                }
            }
        }
        else{
            printf("Intersection Not Possible");
        }
    }
    else{
        printf("\n\n");    
    }
    return 0;
}