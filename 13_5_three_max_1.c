#include <stdio.h>
int max3(int, int, int);

int max3(int a, int b, int c){
    int max = a;
    if(b >= max){
        max = b;
    }
    if(c >= max){
        max = c;
    }
    return max;
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