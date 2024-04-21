#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i = 0;
    int j = 0;
    int n[10] = {0};
    srand(time(0));

    for(i = 0; i < 10; i++){
        n[i] = i + 1;
    }

    for(i = 0; i < 10; i++){
        j = rand() % (10-i) + i;
        int tmp = 0;
        tmp = n[i];
        n[i] = n[j];
        n[j] = tmp;
        printf("%d ", n[i]);
    }

    return 0;
}