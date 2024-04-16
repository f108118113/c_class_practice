#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int v[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int i = 0;
    int j = 0;
    int k = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            int r = rand() % 9 ;
            // int r = rand() % (9 - k) + k; // enhance complex
            int x = r / 3; // randomly get x-axis
            int y = r % 3; // randomly get y-axis
            int t = v[x][y];
            v[x][y] = v[i][j];
            v[i][j] = t;
            // k++;
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }   




}