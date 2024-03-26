#include <stdio.h>
int i = 5;
int f(){
    i = i + 1;
    printf("%d\n", i);
    return 0;
}
int main(){

    printf("%d\n", i);
    int i = 6;
    i = i + 1;
    f();
    printf("%d\n", i);
    return 0;

}