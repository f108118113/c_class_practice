#include <stdio.h>

int main(){
    int v[5] = { 1, 2, 3, 4, 5};
    int *n;
    // n = v;
    // int i = 0;
    // for(i = 0; i < 5; i++){
    //     printf("i = %d\t\n", *n);
    //     n++;
    // }
    for(n = v; n != &v[5]; n++){
        printf("*n = %d\t\n", *n);
    }


    return 0;
}