//Write a program that takes three integers a, b, and c as input, representing the coefficients of a quadratic equation ax^2 + bx + c = 0. The program should calculate and print the roots of the equation along with their type.
#include <stdio.h>
#include <math.h>
int main(){
    int a=0, b=0, c=0;
    double root1=0, root2=0;
    scanf("%d %d %d", &a, &b, &c);
    double D = (b*b)- (4*a*c);
    if(D>0.00){
        root1 =( -b +sqrt(D) )/(2.00*a);
        root2 =( -b -sqrt(D) )/(2.00*a);
        printf("Roots: %.2lf, %.2lf\n", root1, root2);
        printf("Type: Real and Distinct");
    }
    else if(D==0.00){
        root1 = (-b + sqrt(D))/(2.00*a);
        printf("Roots: %.2lf, %.2lf\n", root1, root1);
        printf("Type: Real and Equal");
    }
    else{
        root1 = -b/(2.00*a);
        root2 = sqrt(-D)/(2.00*a);
        printf("Roots: %.2lf + %.2lfi, %.2lf - %.2lfi\n", root1, root2, root1, root2);
        printf("Type: Complex");
    }
    return 0;
}
