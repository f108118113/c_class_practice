#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i = 0;
    int n = 0;
    int count[10] = {0};
    srand(time(0));
    
    for(i = 0; i < 10; i++){
        do{
            n = rand() % 10 + 1;
        }
        while(count[n-1] != 0);
        printf("%d ", n);
        count[n-1]++;
    }
    
}