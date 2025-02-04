//Lucky Bhaskar
#include <stdio.h>

int main()
{
    double initialamt=0;
    int days=0;
    scanf("%lf %d", &initialamt,&days);
    double currentamt=initialamt;
    double minamt= initialamt;
    if((initialamt>=50 && initialamt<=1000000) && (days>=0 && days<=100)){
        for(int i=1;i<=days;i++){
            if(currentamt<2.00/5*initialamt){
                printf("Stopped early after %d days: %.2lf\n",(i-1),currentamt);
                printf("Minimum amount held by Bhaskar: %.2lf\n",currentamt);
                printf("Better Luck Next Time!");
                return 0;
            }
            if(i%6==0){
                currentamt+=0.70*currentamt;
                i+=6;
                continue;
            }
            else if(i%2==0){
                currentamt-=(1.00/8)*currentamt;
            }
            else if(i%3==0){
                currentamt-=(1.00/5)*currentamt;
            }
            
            else{
                currentamt-=0.10*currentamt;
            }
            
            if(currentamt<minamt){
                minamt=currentamt;
            }
        }
        printf("After %d days: %.2lf\n", days, currentamt);
        printf("Minimum amount held by Bhaskar: %.2lf\n", minamt);
        if (currentamt> 0.70*initialamt) {
            printf("Lucky Bhaskar");
        } 
        else {
            printf("Better Luck Next Time!");
        }
    }

    return 0;
}
