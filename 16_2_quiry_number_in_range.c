#include <stdio.h>

int main(){
    int i = 0;
    int n[10] = {0};
    int l;
    int r;
    for(i = 0; i<10; i++){
        printf("%d: ", i+1);
        scanf("%d", &n[i]);
    }
    while(1){
        printf("L R: ");
        scanf("%d%d", &l, &r);
        if( l==0 & r==0){
            break;
        }
        printf("Ans: ");
        for(i = 0; i<10; i++){
            if(n[i]>=l & n[i]<=r){
                printf("%d ", n[i]);
            }
        }
        printf("\n");
    }
    return 0;
}