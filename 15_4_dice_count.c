#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    srand(time(0));
    int times = 1;
    int dice = 0;
    int counter[6] = {0};
    int i;
    int j;
    
    for(i = 1; i <= 6000; i++){
        dice = rand() % 6 + 1;
            counter[dice-1]++;
        }
        
    
    
    for(int i = 0; i <= 5; i++){
        printf("%d: %d\n", i+1 ,counter[i]);
    }
    
    // printf("%d\n", times);
    return 0;
}