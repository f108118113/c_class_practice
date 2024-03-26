#include <stdio.h>
void countTo3_1(int);
void countTo3_2(int);

void countTo3_1(int i){
    if (i<=3)
    {
        printf("%d\n", i);
        countTo3_1(i+1);
    }
}

void countTo3_2(int i){

    if (i<=3)
    {
        countTo3_2(i+1);
        printf("%d\n", i);
    }
}


int main(){
    countTo3_1(1);
    printf("\n");
    countTo3_2(1);
    return 0;
}