#include <stdio.h>

int main(){
    int i = 3;
    printf("%d\n", i);
    if(i == 3){
        i = i + 1;
        int i = 6;
        printf("%d\n", i);
        i = i + 1;
    }
    // printf("%d\n", i);
    if(i == 3){
        printf("%d\n", i);
    }
    return 0;

}