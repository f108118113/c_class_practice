#include <stdio.h>

void swap(int *, int *);
void sort(int *, int *);

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void sort(int *a, int *b){
    if(*a > *b){
        swap(a, b);
        //swap(&*a, &*b);
    }
}

int main(){
    int a = 5;
    int b = 4;
    printf("a, b: %d, %d\n", a, b);
    sort(&a, &b);
    printf("a, b: %d, %d\n", a, b);

    return 0;
}