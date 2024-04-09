#include <stdio.h>
#include <stdlib.h>

int main(){
    int n[10] = {0};
    int i = 0;
    for(i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }
    while(1){
        int quiry = 0;
        printf("Q: ");
        scanf("%d", &quiry);
        if(quiry == 0){
            break;
        }
        int dst = abs(n[0]-n[1]);
        int nearest;

        // target
        // 1. input 1,3,5,7 input: 1 output: 3
        // 2. input 1,3,4,5 input: 3 output: 4

        for(i = 0; i < 10; i++){
            int tmp = abs(quiry - n[i]);
            if( 
                (tmp != 0) && // input and ouput must to be different
                ((tmp < dst || (tmp == dst && n[i] < nearest))
                )
                ){
                dst = tmp;
                nearest = n[i];
            }

        }
        printf("%d\n", nearest);
    }
}