/*
Write a program to determine the grade of steel based on the provided values of hardness, carbon content, and tensile strength
*/
    #include<stdio.h>  
  
int main()  
{  
    int hardness, tens;  
    float carbon;   
    scanf("%d %f %d", &hardness, &carbon, &tens);  
  
    if(hardness > 50 && carbon < 0.7 && tens > 5600)  
    {  
        printf("The grade of the steel is: 10\nAll of the conditions met.");  
    }  
    else if(hardness > 50 && carbon < 0.7)  
    {  
        printf("The grade of the steel is: 9\nTwo conditions met.");  
    }  
    else if(carbon < 0.7 && tens > 5600)  
    {  
        printf("The grade of the steel is: 8\nTwo conditions met.");  
    }  
    else if(hardness > 50 && tens > 5600)  
    {  
        printf("The grade of the steel is: 7\nTwo conditions met.");  
    }  
    else if(hardness > 50 || carbon < 0.7 || tens > 5600)  
    {  
        printf("The grade of the steel is: 6\nOnly one condition met.");  
    }  
    else if(hardness < 50 && carbon > 0.7 && tens < 5600)  
    {  
        printf("The grade of the steel is: 5\nNone of the conditions met.");  
    }  
   
    return 0;
}