/*Your task is to design a game where the player embarks on an adventurous treasure hunt. The game features an adventurer tasked with navigating a perilous treasure hunt in a mysterious labyrinth. The labyrinth is filled with traps, riddles, and challenges that will test his wit and bravery. The goal is to find the ultimate treasure hidden in one of the secret chambers. The objective is to simulate the treasure hunt journey and generate responses based on the player's decisions.
The game should display corresponding messages in new line for each action the player takes
*/

#include <stdio.h>

int main() {

 int A,B,D;
    scanf("%d\n", &A);
        if(A==1){
            printf("Player chooses the Left path.\n");
            scanf("%d\n", &B);
            if(B==1){
                printf("Poor choice, Game Over!\n");
                return 0;
            }
            else{
                printf("Player found a bridge.\n");
                int B1;
                scanf("%d\n", &B1);
                if(B1==1){
                printf("Player crosses the bridge safely.\n");
                
                }
                else{
                printf("Poor luck, Game Over!\n");
                return 0;   
                }
        }
        }
        else if(A==2){
             printf("Player chooses the Middle path.\n");
             scanf("%d\n", &B);
            if(B==582){
                printf("Player solved the puzzle.\n");
                }
            else{
                printf("Foolish player, Game Over!\n");
                    return 0;
            }
        }
        
        else{
             printf("Player chooses the Right path.\n");
            scanf("%d\n", &B);
            if(B==30){
                printf("Player solved the puzzle.\n");
            }
            else{
                printf("Foolish player, Game Over!\n");
                    return 0;
            }
        }
        scanf("%d\n",&D);
        if(D==1){
            printf("All that glitters is not gold, Game Over!\n");
           return 0; 
        }
        else if(D==2){
            printf("All your efforts were for nothing, Game Over!\n");
            return 0;
        }
        else{
            printf("Congratulations!! You won the treasure.\n");
            return 0;
        }
    return 0;
    
    
}