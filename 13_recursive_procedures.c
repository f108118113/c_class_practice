#include <stdio.h>
int f(int);

int f(int i){
    if(i == 2){
        return i;
    }
    return f(i+1);
}

int main(){
    printf("%d\n", f(0));
    return 0;
}