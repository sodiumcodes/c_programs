/*Write a program that will take the lengths of the three sticks as input, validate if they can form a valid closed shape, and output the correct classification.*/

#include <stdio.h>
int main() {
    int a,b,c;
    a=1;
    b=1;
    c=1;
    scanf("%d %d %d", &a,&b,&c);
    printf("Lengths: [%d, %d, %d]\n", a, b, c);
    if(a + b > c && a + c > b && b + c > a){
        if(a==b && b==c){
        printf("Type: Equilateral\nAll sides are of the same length.");
    }
    else if(a==b && a!=c || c==a && b!=c||c==b && a!=b){
        printf("Type: Isosceles\nExactly two sides are equal.");
    }
    else{
    printf("Type: Scalene\nAll sides are of different lengths.");
    }
    }
    else{
    printf("Type: Invalid\nCannot form a valid shape.");
    }
    return 0;
}