#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Count times for two dice sum
int main(){
    
    srand(time(0));
    int i = 0;
    int dice1 = 0;
    int dice2 = 0;
    int sum = 0;
    int count[11] = {0}; // dice1 + dice2 at least = 2

    for(i = 0; i < 10000 ; i++){
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        count[sum-2]++;
    }

    for(i = 0; i < 11 ; i++){
        printf("%d: %d\n", i+2, count[i]);
    }

}