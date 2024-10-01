#include <stdio.h>

/*
when input is "char const *", can input "Your_String"
*/

int main(){
    char const * charA = "test";
    char * const charB = "test";
    char const charC[] = "test";

    printf("Before charA: %s\n", charA);
    printf("Before charA Addr: %p\n", &charA);
    printf("Before charB: %s\n", charB);
    printf("Before charC: %s\n", charC);

    charA = "Test"; //(O)
    // charB = "Test"; // (X)
    // charC[0] = 'T'; // (X)
    printf("After charA: %s\n", charA);
    printf("Before charA Addr: %p\n", &charA);
    // printf("%p\n", &charA);
}