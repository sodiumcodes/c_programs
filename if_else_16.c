/*Write a program to determine the type of 2D geometric figure based on the following properties:

Number of sides (n) – can be 3, 4, or 0 (for a circle).
Side lengths (a,b,c,d) – three sides if n=3, four if n=4, none for n=0.
Angles (A,B,C,D) in degrees – three angles if n=3, four if n=4, none for n=0.*/

#include <stdio.h>

int main() {

    int n, a,b,c,d,e,f,g,h;
   scanf("%d", &n);
    if(n>=0){
    switch(n){
        case 0:printf("Circle");
               break;
       
            
        case 4:scanf("%d %d %d %d %d %d %d %d", &a, &b, &c,&d,&e, &f, &g,&h);
            if(a>0 && b>0 && c>0 && d>0 && e>0 && f>0 && g>0 && h>0 && ((e+f+g+h)==360)){
             if(a==b && b==c&& c==d && d==a){
                 if(e==90 && f==90 && g==90 && h==90){
                     printf("Square");
                     return 0;
                 }
                 else if(e==g && f==h){
                    printf("Rhombus");
                     return 0;
                 }
                 else{printf("Invalid Figure");
                 return 0;
                }
             }
              else if(a==c && b==d){
                  if(e==90 && f==90 && g==90 && h==90){
                     printf("Rectangle");
                      return 0;
                 }
                  else if(e==g && f==h){
                    printf("Parallelogram");
                      return 0;
                 } 
                  else{printf("Invalid Figure");
                 return 0;
                }
              }
            }
            else{printf("Invalid Figure");
                 return 0;
                }
            
        case 3: scanf("%d %d %d %d %d %d", &a, &b, &c,&e, &f, &g);
            if(a>0 && b>0 && c>0 && e>0 && f>0 && g>0 && ((e+f+g)== 180) &&  (a + b >=c && a + c >=b && b + c >=a)){
            if(a==b && b==c&& c==a){
            if(e==60 && f==60 && g==60){
                printf("Equilateral Triangle");
                return 0;
            }
            else{
                printf("Invalid Figure");
                return 0;
            }
        }
            else if(((a==b && e==f) && (c!=a && c!=b && f!=g && e!=g)|| ((a==c && e==g) && (b!=a && b!=c && g!=f &&e!=f))|| ((b==c && g==f)&& (c!=a && b!=a && g!=e && f!=e)))){
                    printf("Isosceles Triangle"); 
                    return 0;
            }
            else if(a!=b && b!=c && c!=a){
                if(e!=f && f!=g && g!=e){
                    printf("Scalene Triangle");
                    return 0;
                }
                else{
                printf("Invalid Figure");
                return 0;
            }
            }
            }
            else{printf("Invalid Figure");
                 return 0;
                }
             default:printf("Invalid Figure");
                break;
    }
    }
    return 0;
}