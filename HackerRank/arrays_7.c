//You are given an array of positive integers. Your task is to find the element that occurs most frequently in the array. If more than one element has the same highest frequency, print the one that appears first in the array.
#include <stdio.h>

int main() {

    int size=0;
    scanf("%d",&size);
    int a[size];
    int freq[size];
    for(int i=0; i<size;i++){
        scanf("%d",&a[i]);
        freq[i]=0;
    }  
    
    int lar=0, index=0;
    for(int i=0; i<size; i++){
        if(freq[i]!=-1){
            for(int j=i; j<size; j++){
                 if(a[i] == a[j]){
                     freq[i]++;
                     if(i!=j){
                         freq[j]=-1;
                     }  
                 }
            }
        }
    }
    for( int i=0; i<size; i++){
        if(freq[i]>lar){
            lar= freq[i];
            index=i;
        }
    }
    printf("%d", a[index]);
    return 0;
}