#include <stdio.h>

int main(){
    int a, b, c, max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    max=a;

    if(b>=max){
        max=b;
    }
    if(c>=max)
    {
        max=c;
    }
    printf("The maximun is %d.\n", max);

}