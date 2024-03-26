#include <stdio.h>
int max2(int, int);
int max3(int, int, int);

int max2(int a, int b){
    int max = a;
    if( b > a){
        max = b;
    }

    return max;
}

int max3(int a, int b, int c){
    return max2(max2(a, b),c);
}

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0 ;

    printf("Please input three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    max = max3(a, b, c);
    printf("The maximum is: %d\n", max);
    return 0;
}