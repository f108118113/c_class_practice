#include <stdio.h>

int main(){

    int N;
    int i;
    int j;
    printf("N = ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if(i==1 | j==1 | i==N | j==N){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}