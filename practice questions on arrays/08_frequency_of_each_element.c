//Write a C program to count frequency of each element in an array.
#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int a[size], visited[size];
    for (int i=0; i<size; i++){
        printf("Enter element- %d: ", i + 1);
        scanf("%d", &a[i]);
        visited[i] = 0; 
    }

    printf("Repeated elements are:\n");
    for (int i = 0; i < size; i++){
        if (visited[i] == 1){
            continue;
        }
        int count=1; 
        for(int j = i+1; j<size; j++){
            if (a[i] == a[j]){
                count++;
                visited[j] = 1; 
            }
        }
        if (count>1){
            printf("%d has been repeated %d times\n", a[i], count);
        }
    }

    return 0;
}
