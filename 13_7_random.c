#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int i;
    i = rand();
    for(i = 1; i <= 5; i++){    
        printf("%d\n", rand());
    }
    return 0;
}