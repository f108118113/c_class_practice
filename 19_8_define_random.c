#include <stdio.h>
#include <time.h>
static unsigned int _next = 1;

int rand(void){
    // X(n+1) = ( a * X(n) + b ) mod c
    // unsigned int after overflow => next * 1103515245 + 12345 % UINT_MAX + 1
    // so not need to % number
    // (DEC)65536 = 2^16 => (BIN) 1 0000 0000 0000 0000
    // (DEC)32768 = 2^15 => (BIN)   1000 0000 0000 0000
    _next = _next * 1103515245 + 12345; 
    return (unsigned int)(next / 65536) % 32768;
    
}

void srand(unsigned int seed){
    _next = seed;
}

int main(){
   srand(time(0));
   for(int i = 0; i < 5; i++){
        printf("%d\n", rand());
   }
    return 0;
}