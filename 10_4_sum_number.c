#include <stdio.h>

int main(){

    int sum=0;
    int N;
    printf("N= ");
    scanf("%d",&N);
    for(int i=1 ; i<=N; i++)
    {
        sum +=i;
    }
    printf("The sum: %d\n",sum);
    return 0;
}