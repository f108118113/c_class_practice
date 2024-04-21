#include <stdio.h>

int main(){
    unsigned int next = 1;

    for(int i = 1; i <= 5; i++){
        // X(n+1) = ( a * X(n) + b ) mod c
        // unsigned int after overflow => next * 1103515245 + 12345 % UINT_MAX + 1
        // so not need to % number
        next = next * 1103515245 + 12345; 
        int rand = (unsigned int)(next / 65536) % 32768;
        // (DEC)65536 = 2^16 => (BIN) 1 0000 0000 0000 0000
        // (DEC)32768 = 2^15 => (BIN)   1000 0000 0000 0000
        printf("%d\n", rand);
        
    }


}