//Write a program to determine the type of angle formed between the hour hand and minute hand.
#include <stdio.h>
int main(){
   int angle;
    scanf("%d", &angle);
    if(angle% 360==0 && angle> 0){ 
        printf("Full Rotation");
        return 0;
    } 
    angle%=360;
    if(angle >=0 && angle < 90){
        printf("Acute Angle");
    } 
    else if(angle == 90){
        printf("Right Angle");
    } 
    else if(angle > 90 && angle < 180){
        printf("Obtuse Angle");
    } 
    else if(angle == 180){
        printf("Straight Angle");
    } 
    else if(angle > 180 && angle < 360){
        printf("Reflex Angle");
    } 
    else{
        printf("Invalid Input");
    }
    return 0;
}
