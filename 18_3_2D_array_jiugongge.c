#include <stdio.h>

int main(){
    int n[3][3] = {
        { 1, 2, 3},
        { 4, 5, 6},
        { 7, 8, 9},
    };
    // int n[3][3];
    int i = 0;
    int j = 0;
    // int k = 1;
    // for(i = 0; i < 3; i++){
    //     for(j = 0; j < 3; j++){
    //         n[i][j] = k;
    //         k++;
    //     }
    // }
    
    // for(i = 0; i < 3; i++){
    //     for(j = 0; j < 3; j++){
    //         n[i][j] = i*3 + j + 1;
    //         k++;
    //     }
    // }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}