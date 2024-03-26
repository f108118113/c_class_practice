#include <stdio.h>
double div2(double);

double div2(double N){
    return N/2;
}

int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("%d / 2 = ",N);
    printf("%f\n", div2(N));
    return 0;
}