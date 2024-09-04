#include <stdio.h>

int main(){
    int a[5];
    int *b;
    b = a;
    printf("a[0] addr: %p\n", &a[0]); 
    printf("a[0] value: %d\n", a[0]); 
    printf("b addr: %p\n", b);
    printf("b value: %d\n", *b); 

    int c[5] = {1,2,3,4,5};
    int *d;
    for(d = c; d != &c[5]; d++){
        printf("%d\n", *d);
    }

    int v[5] = {1,2,3,4,5};
    printf("%d\n", v[0]);        //1 print value
    printf("%p\n", (&v[0]));     //0x16cee32a0 print address
    printf("%p\n", (&v));        //0x16cee32a0
    
    printf("%p\n", (&v[0] + 1)); //0x16cee32a4
    printf("%p\n", (&v + 1));    //0x16cee32a4
    
    printf("%p\n", (&v[0] + 2)); //0x16cee32c8
    printf("%p\n", (&v + 2));    //0x16cee32c8

    // printf("%p\n", (&v[2] + &v[1]));       //Compile error
    printf("%ld\n", (&v[2] - &v[1])); // print distant from v[2] to v[1]

    // int *n = v;
    // printf("%d\n", v[0]);
    // printf("%d\n", *n);
    // printf("%p\n", *(&n));
    // n++;
    // printf("%d\n", v[1]);
    // printf("%d\n", *n);
    // printf("%p\n", *(&n));
}