#include <stdio.h>
int max2(int, int); 

int max2(int a, int b){
    int max = a;
    if( b > a){
        max = b;
    }

    return max2;
}

int main(){
    int a = 0;
    int b = 0;
    printf("Please input the first number: ");
    scanf("%d", &a);
    printf("Please input the second number: ");
    scanf("%d", &b);
    printf("Maximum: %d \n", max2(a,b));
}