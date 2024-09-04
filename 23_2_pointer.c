#include <stdio.h>

int main(){
    int count = 1;
    int *countaddr = &count;

    int a = count; //(O) (int) = (int)
    // int *b = count; (X)
    int *b = &count; //(O) (int *) = (int *)
    // int *a = &count; (X)

    printf("count: %d\n", count);
    printf("*count: %p\n", &count);
    printf("*countaddr: %d\n", *countaddr);
    printf("&countaddr: %p\n", &countaddr);

    printf("a: %d\n", a);
    printf("*a: %p\n", &a);
    printf("b: %d\n", *b);
    printf("*b: %p\n", &b);


}