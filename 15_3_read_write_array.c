#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[4] = {3, 5, 0, 7};
    int i;
    int max = v[0];

    for(i = 1; i < (int)sizeof(v)/sizeof(v[0]) - 1; i++)
    {
        if(v[i]>max){
            max = v[i];
        }
    } 
    printf("max: %d\n", max);
}