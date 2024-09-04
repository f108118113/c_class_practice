#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void for_loop_copy_array();
void printf_array(int[10]);
void increase_int(int);
void increase_array(int[3]);

// use for loop copy each value of array
void for_loop_copy_array(){
    printf("Use for loop copy each value of array \n");
    srand(time(0));
    int n[10] = {0};
    int v[10] = {0};
    int i = 0;
    for(i = 0; i < 10; i++){
        n[i] = rand() % 100;
    }
    for(i = 0; i < 10; i++){
        v[i] = n[i];
    }
    for(i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }
    printf("\n");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void printf_array(int n[10] ){
    int i = 0;
    for(i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }
    printf("\n");
}
void copy_array(){  
    printf("With print array funrcition and use for loop copy each value of array \n");
    srand(time(0));
    int n[10] = {0};
    int v[10] = {0};
    int i = 0;
    for(i = 0; i < 10; i++){
        n[i] = rand() % 100;
    }
    for(i = 0; i < 10; i++){
        v[i] = n[i];
    }
    printf_array(n);
    printf_array(v);
}

void increase_int(int n){
    n++;
}
void increase_array(int n[3]){
    int i = 0;
    for(i = 0; i < 3; i++){
        n[i]++;
    }
}


int main(){
    for_loop_copy_array();
    copy_array();

    // Different from int and int array about function input
    printf("call increase_int\n");
    int n = 1;
    increase_int(n);
    printf("%d\n", n);

    printf("call increase_array\n");
    int a[3] = {1, 2, 3};
    int i = 0;
    increase_array(a);
    for(i = 0; i < 3; i++){
        printf("%d ", a[i]);
    }

    return 0;
}