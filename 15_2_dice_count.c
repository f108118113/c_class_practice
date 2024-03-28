#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int times = 1;
    int dice = 0;
    int counter[6] = {0};
    // dice = rand();
    // printf("%d\n", dice);
    while(times <= 6000){
        dice = rand() % 6 + 1;
        // printf("%d\n", dice);
        switch(dice){
            case 1:
                counter[0]++;
                break;
            case 2:
                counter[1]++;
                break;
            case 3:
                counter[2]++;
                break;
            case 4:
                counter[3]++;
                break;
            case 5:
                counter[4]++;
                break;
            case 6:
                counter[5]++;
                break;
            }
        times++;
    }
    
    for(int i = 0; i <= 5; i++){
        printf("%d: %d\n", i+1 ,counter[i]);
    }
    
    // printf("%d\n", times);
    return 0;
}