#include <stdio.h>

int main(){
    int v[5] = {1,3,5,7,9};
    // e0, e4, e8, ec, f0, 
    int *pv = (int *)(&v+1);
    int *a = v+1;

    // printf("v[0]: %d\n", v[0]);
    // printf("v[0]+1: %d\n", v[0]+1);
    // printf("&v[0]: %p\n", &v[0]);
    printf("*(&v[0]+1)+1: %d\n", *(&v[0]+1)+1);
    // printf("&v[1]: %p\n", &v[1]);
    printf("&v[0]: %p\n", &v[0]);
    printf("&v[4]: %p\n", &v[4]);
    printf("&v[5]: %p\n", &v[5]);
    // printf("v[5]: %d\n", v[5]); //undefine
    printf("*pv: %d\n", *pv); //undefine
    printf("pv: %p\n", pv);
    printf("*a: %d\n", *a);
    printf("(&v[0]+1): %p\n", (&v[0]+1));
    printf("(&v+1): %p\n", (&v+1));
    printf("b: %p\n", &b);
    return 0;
}