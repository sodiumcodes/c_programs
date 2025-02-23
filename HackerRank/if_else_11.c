/*This New Year, Naina (an experienced event planner) is planning a celebration and needs your help to determine if they can host it within their budget. Naina has a list of expenses for different activities and items, along with specific conditions for hosting the celebration. Write a program to evaluate whether Naina can host the celebration or not. Conditions to Host the Celebration:

The total cost of the celebration must not exceed the budget.
The number of guests must be greater than 5 and less than or equal to 50.
At least one of the following conditions must hold:
The decoration cost is less than 30% of the budget.
The total food cost is less than 50% of the budget.
If the number of guests exceeds 25, there must be a music arrangement (i.e., musicCost > 0).
*/

#include <stdio.h>

int main()
{
int budget, numGuests, food, decor, music, extra;
    scanf("%d %d %d %d %d %d", &budget, &numGuests, &food, &decor, &music, &extra);
    
    int total = numGuests * food + decor + music + extra;
    
    if (total <= budget && (numGuests > 5 && numGuests <= 50) && (decor < 0.3 * budget || numGuests * food < 0.5 * budget) && (numGuests <= 25 || music > 0)) {
        printf("Celebration Approved\n");
    } else {
        printf("Celebration Denied\n");
    }
}