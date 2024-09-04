#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arrayRand(int[10]);
void arrayPrint(int[10]);
int arrayMax(int[10]);

void arrayRand(int n[10]){
    int i = 0;    
    srand(time(0));
    
    for(i = 0; i < 10; i++){
        n[i] = rand() % 100;
    }
}

void arrayPrint(int n[10]){
    int i = 0;
    for(i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }
    printf("\n");
}

int arrayMax(int n[10]){
    int i = 0;
    int max = n[0];
    for(i = 1; i < 10; i++){
        if(max < n[i]){
            max = n[i];
        }
    }
    return max;
}

int main(){
    int i = 0;
    int n[10] = {0};
    arrayRand(n);
    arrayPrint(n);
    printf("Max: %d\n", arrayMax(n));
}