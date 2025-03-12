//Maximum product of a triplet(subsequence of size 3) in array
#include <stdio.h>
int main() {
	int testcases=0;
    scanf("%d",&testcases);
    for(int i=1; i<=testcases;i++){
        int size=0;
        scanf("%d",&size);
        int a[size];
        for(int i=0; i<size; i++){
            scanf("%d", &a[i]);
        }
        int max=a[0];
        int product=1;
        for(int j=0; j<3; j++){
            for(int i=j+1; i<size; i++){
                if(max<a[i]){
                    max=a[i];
                }
            }
            max^a[j];
            product*=a[j];
        }
        printf("%d\n", product);
    }
    return 0;
}