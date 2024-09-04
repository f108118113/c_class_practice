#include <stdio.h>
void sort(int *, int *);

void sort(int *a, int *b){
    if(*a > *b){
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }

}

int main(){
    int a = 7;
    int b = 3;
    printf("a = %d, b = %d\n", a, b);
    sort(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}