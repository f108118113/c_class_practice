#include <stdio.h>

void countTo1_1(int);
void countTo1_2(int);

void countTo1_1(int i){
    if(i >= 1){
        printf("%d\n", i);
        countTo1_1(i-1);
    }
}

void countTo1_2(int i){
    if(i >= 1){
        countTo1_2(i-1);
        printf("%d\n", i);
    }
}


int main(){
    countTo1_1(3);
    printf("\n");
    countTo1_2(3);
    return 0;
}