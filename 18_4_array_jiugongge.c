#include <stdio.h>

int main(){
    int n[9];
    int i = 0;

    for(i = 0; i < 9; i++){
        n[i] = i + 1;
    }
    for(i = 0; i < 9; i++){
        printf("%d ", n[i]);
        if( i % 3 == 2){
            printf("\n");
        }
    }
}