/*You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.
Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.
Your task is to apply these changes and return the final passcode that will successfully open the vault.
Note: After the number 9, the dial wraps around back to 0.*/

#include <stdio.h>

int main() {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
    if((n1>=0 && n1<10) && (n2>=0 && n2<10) && (n3>=0 && n3<10) && (n4>=0 && n4<10) && (n5>=0 && n5<10) && (n6>=0 &&                n6<10) &&(n7>=0 && n7<10) &&(n8>=0 && n8<10) && (n9>=0 && n9<10) &&(n10>=0 && n10<10))
    {
        int index1, rotation1, index2, rotation2, index3, rotation3;
        scanf("%d %d", &index1, &rotation1);
        scanf("%d %d", &index2, &rotation2);
        scanf("%d %d", &index3, &rotation3);
        switch (index1) {
        case 0: n1 = (n1 + rotation1) % 10;
                
                break;
        case 1: n2= (n2 + rotation1) % 10; 
                
                break;
        case 2: n3 = (n3+ rotation1) % 10;
                
                break;
        case 3: n4 = (n4 + rotation1) % 10; 
                
                break;
        case 4: n5 = (n5 + rotation1) % 10; 
                
                break;
        case 5: n6 = (n6 + rotation1) % 10; 
               
                break;
        case 6: n7 = (n7 + rotation1) % 10; 
                break;
        case 7: n8 = (n8 + rotation1) % 10; 
                break;
        case 8: n9 = (n9 + rotation1) % 10; 
                break;
        case 9: n10 = (n10 + rotation1) % 10; 
                break;
    }
        switch (index2) {
        case 0: n1 = (n1 + rotation2) % 10; 
                break;
        case 1: n2= (n2 + rotation2) % 10; 
                break;
        case 2: n3 = (n3+ rotation2) % 10; 
                break;
        case 3: n4 = (n4 + rotation2) % 10; 
                break;
        case 4: n5 = (n5 + rotation2) % 10; 
                break;
        case 5: n6 = (n6 + rotation2) % 10; 
                break;
        case 6: n7 = (n7 + rotation2) % 10; 
                break;
        case 7: n8 = (n8 + rotation2) % 10; 
                break;
        case 8: n9 = (n9 + rotation2) % 10; 
                break;
        case 9: n10 = (n10 + rotation2) % 10; 
                break;
    }
        switch (index3) {
        case 0: n1 = (n1 + rotation3) % 10; 
                break;
        case 1: n2= (n2 + rotation3) % 10; 
                break;
        case 2: n3 = (n3+ rotation3) % 10; 
                break;
        case 3: n4 = (n4 + rotation3) % 10; 
                break;
        case 4: n5 = (n5 + rotation3) % 10; 
                break;
        case 5: n6 = (n6 + rotation3) % 10; 
                break;
        case 6: n7 = (n7 + rotation3) % 10; 
                break;
        case 7: n8 = (n8 + rotation3) % 10; 
                break;
        case 8: n9 = (n9 + rotation3) % 10; 
                break;
        case 9: n10 = (n10 + rotation3) % 10; 
                break;
    }
        printf("%d %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4 , n5, n6, n7 ,n8,n9, n10);
    }
    
    return 0;
}