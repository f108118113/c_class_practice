#include <stdio.h>

int main(){
    int n=10;
    for(int i=1; i<=n; i++){
        if(i%2==0 && i%3!=0){
            printf("%d\n",i);
        }
    }

    for(int i=2; i<=n; i+=2){
        if(i%3!=0){
            printf("%d\n",i);
        }
    }
    
    for(int i=1; i<=5; i++){
        int number = i*2;
        if(number % 3 != 0){
            printf("%d\n",number);
        }
    }

    return 0;
}