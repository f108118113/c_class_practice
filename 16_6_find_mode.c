#include <stdio.h>
#include <stdlib.h>

void find_mode(){
    // input 10 number that between 0~9, then find mode.
    int i = 0;
    int n = 0;
    int summary[10] = {0};
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &n);
        summary[n]++;
    }

    int ans = 0;
    int tmp = summary[0];
    for(i = 0; i < 10; i++){
        if(summary[i] >= tmp )
        {
            tmp = summary[i];
            ans = i;
        }
    }
    printf("ans: %d\n", ans);
}

void find_mode_2(){
    // input 10 number that between 0~9, then find mode.
    int i = 0;
    int n = 0;
    int summary[10] = {0};
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &n);
        summary[n]++;
    }

    int ans = 0;
    for(i = 1; i < 10; i++){
        if(summary[i] >= summary[ans]){
            ans = i;
        }
    }
    printf("ans: %d\n", ans);
}


int main(){
    find_mode();
    find_mode_2();
    return 0;
}