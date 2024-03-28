#include <stdio.h>

int main(){
    int v[3];
    v[0] = 3;
    v[1] = 5;
    v[2] = 0;
    int max = v[0];
    if (v[1] > max){
        max = v[1];
    }
    if (v[2] > max){
        max = v[2];
    }
    printf("Max: %d \n", max);
    return 0;
}
