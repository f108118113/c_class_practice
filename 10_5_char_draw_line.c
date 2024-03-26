#include <stdio.h>

int main(){

    int N;

    printf("N = ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        printf("*");
    }
    return 0;
}