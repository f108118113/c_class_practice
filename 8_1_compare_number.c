#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Please input two number: ");
    scanf("%d%d", &a, &b);
    printf("a:%d b:%d\n",a,b);
    if(a>b){
        printf("a > b\n");
    }
    else if(a<b){
        printf("a < b\n");
    }
    else{
        printf("a = b");
    }
    return 0;

}