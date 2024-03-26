#include <stdio.h>

int main(){
    int a,b;
    int max;
    printf("Please enter first integer: ");
    scanf("%d", &a);
    max=a;
    printf("Please enter second integer: ");
    scanf("%d", &b);
    if(b>=a){
        max=b;
    }
    printf("The maximun is %d.\n", max);
    return 0;
}