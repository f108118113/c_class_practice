#include <stdio.h>

int multiple_for(){

    int i;
    int j;
    int k;
    for( i = 2; i <= 9; i++)
    {
        for( j = 1; j <= 9; j++)
        {
            k = i * j;
            printf("%d * %d = %d\n", i, j, k);
        }

    }
    return 0;
}

int single_for(){

    int i;
    for( i = 1; i <= 72; i++){
        int j = (i - 1) / 9 + 2;
        int k = (i - 1) % 9 + 1;
        printf("%d * %d = %d\n", j, k, j * k);
    }
    return 0;
}

int main(){

    single_for();
}