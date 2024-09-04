#include <stdio.h>
void addone(int *);

void addone(int *n){
    *n = *n + 1;
}

int main(){
    int n = 1;
    printf("n = %d\n", n);
    addone(&n);
    printf("n = %d\n", n);
    return 0;
}