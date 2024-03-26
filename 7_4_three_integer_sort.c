#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int t;

    printf("Please inpur three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Before: %d %d %d\n",a,b,c);
    if(b < a){
        t=b; b=a; a=t;
    }
    if(c < a){
        t=a; a=c; c=t;
    }
    if(c < b){
        t=b; b=c; c=t;
    }

    printf("After: %d %d %d\n",a,b,c);
    return 0;
}