#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int i; 
    for(i = 1; i <= 5; i++)
    {
        int dice;
        do{
            dice = rand();
        }
        while(dice < 1 || dice > 6);
        printf("%d\n", dice);
    }
    return 0;
}