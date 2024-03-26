#include <stdio.h>
int sum(int);
int sum_recursion(int);

int sum(int N){
    int sum = 0;
    int i;
    for(i = 1; i <= N; i++){
        sum = sum + i;
    }
    return sum;
}

int sum_recursion(int N){
    if(N == 1){
        return 1;
    }
    else{
        return sum_recursion(N-1) + N;
    }
}

int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("%d\n", sum(N));
    printf("\n");
    printf("%d\n", sum_recursion(N));
    return 0;
}