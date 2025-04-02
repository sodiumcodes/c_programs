/*
You live on a long street, represented as an array, where each position on the street has a specific type:

1 → Red House (target)
-1 → Road Blockage (you cannot pass through)
0 → Normal House (walkable)
2 → Fast Road (you move twice as fast, meaning each step on a road counts as half a step)
Your task is to calculate the shortest distance from every position on the street to the nearest red house (1), considering these movement rules:

Allowed Moves: You can move left or right.
Road Blocks (-1) Cannot Be Crossed: You cannot pass through them.
Normal House (0) Can Be Crossed: Moving across a normal house counts as 1.0 step.
Fast Roads (2) Count as Half a Step: Moving onto a road speeds up movement, meaning each road step counts as 0.5 instead of 1.0.
If a Red House cannot be reached from any point, return -1.0 for that position.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size=0;
    scanf("%d",&size);
    int a[size];
    double frontDist[size];// front side of the array
    double backDist[size];// back side of the array
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
        frontDist[i]=-1.0;
        backDist[i]=-1.0;
    }
    double dist=0.0; //calculate the dist
    //i th loop for the elements
    //jth loop for finding dist
    //frontside
    for(int i=0; i<size; i++){
        if(a[i] == 1|| a[i] == -1){
           frontDist[i]= (a[i]==-1)? -1.0 : 0.0;
           continue;
        }
        dist=0.0;
        for(int j=i+1; j<size; j++){   
            
            if(a[j]==0){
                dist+=1.0;
            }
            else if(a[j]==2){
               dist+=0.5;
            }
            else if(a[j]==-1){
                break;
            }
            else{
                if(a[i]==0){
                    dist+=1.0;
                }
                else if(a[i]==2){
                    dist+=0.5;
                }
                frontDist[i]= dist;
                break;
            }
        }   
        
    }
    //backside
    for(int i=size-1; i>=0; i--){
        if(a[i] == 1|| a[i] == -1){
           backDist[i]= (a[i]==-1)? -1.0 : 0.0;
           continue;
        }
        dist=0.0;
        for(int j=i-1; j>=0; j--){   
            if(a[j]==0){
                dist+=1.0;
            }
            else if(a[j]==2){
                dist+=0.5;
            }    
            else if(a[j]==-1){
                break;
            }
            else{
                if(a[i]==0){
                    dist+=1.0;
                }
                else if(a[i]==2){
                    dist+=0.5;
                }
                backDist[i]= dist;
                break;
            }
        }    
    }
    for(int i=0; i<size; i++){
        dist=0.0;

        if (frontDist[i] == -1.0) {
            dist = backDist[i]; 
        } 
        else if (backDist[i] == -1.0) {
            dist = frontDist[i]; 
        } 
        else {
            dist = (frontDist[i] < backDist[i]) ? frontDist[i] : backDist[i];
        }

        printf("%.1lf ", dist);
    }

    return 0;
}