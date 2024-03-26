#include <stdio.h>

int traingle(int);
int print_stars(int);

void traingle(int N)
{
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void print_stars(int i)
{
    for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
    // return;
}

int main(){
    int N = 0;
    printf("N = ");
    scanf("%d", &N);
    traingle(N);
    // for(int i; i <= N; i++)
    // {
    //     print_stars(i);
    //     printf("\n");
    // }
    
    return 0;
}