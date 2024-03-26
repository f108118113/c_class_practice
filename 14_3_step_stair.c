#include <stdio.h>
int step_stair(int);

int step_stair(int N){
    if(N <= 2){
        return N;
    }
    return step_stair(N-1)+step_stair(N-2);
}

int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("%d\n", step_stair(N));
}