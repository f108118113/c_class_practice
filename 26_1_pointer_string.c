#include <stdio.h>

int main(){

    /*
    The local variables are stored in the stack, 
    which grows from top to bottom
    (from higher memory addresses to lower memory addresses).
    */

    char strA[] = "fff";  //0x16d983318
    char strB[] = {'a', 'b', 'c', 'b'}; //0x16d983314
    char strC[] = {'d', 'e', 'f', 'g', '\0'}; //0x16b48330c
    char *strD = "hij";
    // char *strE = {'x', 'y', 'z', '\0'}; // (X) compile error

    printf("strA: %s\n", strA); //fff

    /*
    If the null terminator '\0' is not added to the end of the string,
    the computer will read in chunks based on its architecture.
    For example, on my 64-bit computer, 
    it will read 8 bytes at a time.
    */
    printf("strB: %s\n", strB); //abcbfff,

    printf("strC: %s\n", strC); //defg
    printf("strD: %s\n", strD); //hij

    printf("strA Addr: %p\n", strA);
    printf("strB Addr: %p\n", strB);
    printf("strC Addr: %p\n", strC);
    printf("strD Addr: %p\n", strD);

    for(int i = 0; strC[i] ; i++ ){
        printf("strC[%d] Addr %p: %c\n", i, &strC[i], strC[i]);
    }
    printf("strC[4] Addr %p\n", &strC[4]);
    printf("strC[5] Addr %p\n", &strC[5]);
    // printf("strC[6] Addr %p\n", &strC[6]); //compile error
    
    // printf({'j', 'k', 'l', 'm', '\0'}); // (X) compile error
    // printf((char[]){'j', 'k', 'l', 'm', '\0'}); // jklm  C99 style
    printf("%s\n",(char[]){'j', 'k', 'l', 'm', '\0'});

    return 0;
}