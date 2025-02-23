//Investment Risk Management

#include <stdio.h>
int main() {
  int age, income, tolerance;
  scanf("%d", &age);
  scanf("%d", &income);
  scanf("%d", &tolerance);
    if(age>0 && (tolerance>0 && tolerance <4) && income>0){
  if (age < 30) {

    if (income <= 30000) {

      if (tolerance == 1) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
          return 0;
      } else if (tolerance == 2) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
          return 0;
      }
    }
      else {
          printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
          return 0;
      }
  } 
        else if (age >= 30 && age < 50) {

    if (income <= 30000) {

      if (tolerance == 1) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
          return 0;
      } else if (tolerance == 2) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
          return 0;
      }
    } 
      else if (income > 30000 && income <= 75000) {
      if (tolerance == 2) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
          return 0;
      }
    } 
      else{
       if (tolerance == 1 || tolerance == 2) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
          return 0;
      } else if (tolerance == 3) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
          return 0;
      }
    }
  }

  // above 50 years
  else if (age >= 50) {

    if (income <= 30000) {
      if (tolerance == 1) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
          return 0;
      } else if (tolerance == 2) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
          return 0;
      }
    } else if (income > 30000 && income < 75000) {
      if (tolerance == 1 || tolerance == 2) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
          return 0;
      } else if (tolerance == 3) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
          return 0;
      }
    }
     else if (income == 75000) {
      if (tolerance == 2) {
       printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
          return 0;
      }  
     }
    if (income > 75000 ) {
      if (tolerance == 1 || tolerance == 2) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
          return 0;
      }
      else{
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
          return 0;
      }
    }
  }
    }
  return 0;
}
