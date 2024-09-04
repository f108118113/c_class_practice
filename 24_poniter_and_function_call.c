#include <stdio.h>
void add_node(int n);
void add_indicate(int *n);

void add_node(int n){
    n = n + 1;
}
void add_indicate(int *n){
    *n = *n + 1;
}

int main(){
    int a = 1;
    add_node(a);
    printf("add_node(a) %d\n", a);

    add_indicate(&a);
    printf("add_indicate(a) %d\n",a);
    return 0;
}
