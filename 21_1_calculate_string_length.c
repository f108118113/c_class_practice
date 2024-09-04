#include <stdio.h>
int str_len(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}


int main(){
    char str[] = "Hello world";
    // same as below:
    // char str[] = {
    //     'H', 'e', 'l', 'l', 'o', ' ',
    //     'w', 'o', 'r', 'l', 'd', '\0' };
    // and
    // char str[] = {
    //     'H', 'e', 'l', 'l', 'o', ' ',
    //     'w', 'o', 'r', 'l', 'd'};
    printf("Length: %zu\n", sizeof(str));
    printf("Length: %d\n", str_len(str));
    // %zu based on C99
    // Also can use %lu
    return 0;
}