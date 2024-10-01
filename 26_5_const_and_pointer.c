#include <stdio.h>

int main(){
    char strA[] = "abcd";
    char *strB = "edgh"; //In generally, don't use it
    const char *strC = "ijkl";

    strA[0] = 'A';
    // strB[0] = 'T'; //(X)
    // strC[0] = 'T'; //(X)
    printf("strA: %s, ", strA );
    printf("strB: %s, ", strB );
    printf("strC: %s\n", strC );

    // strA = strB; // (char[]) = (char *) (X)
    // strA = strC; // (char[]) = (const char *) (X)
    strB = strA; // (char *) = (char[]) (O)
    // strB = strC; // (char *) =  (X)
    strC = strA; // (const char *) = (char[]) (O)
    strC = strB; // (const char *) = (char *) (O)
    strA[0] = 'B';
    printf("strA: %s, ", strA );
    printf("strB: %s, ", strB );
    printf("strC: %s\n", strC );
    return 0;
}