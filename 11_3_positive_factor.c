#include <stdio.h>

int main(){

    int min;
    int max;

    printf("Please input min number: ");
    scanf("%d", &min);

    printf("Please input max number: ");
    scanf("%d", &max);

    for(int i = min; i <= max ; i++)
    {
        if( i % 3 == 2 && i % 5 == 3 && i % 7 == 2){
            printf("%d\n",i);
        }
    }

    return 0;
}