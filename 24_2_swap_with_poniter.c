#include <stdio.h>
void swap(int *, int *);

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int a = 1;
    int b = 2;

    printf("before a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("after a: %d, b: %d\n", a, b);

    return 0;
}