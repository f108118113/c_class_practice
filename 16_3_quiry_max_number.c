#include <stdio.h>

int main(){
    int n[10];
    int quiry;
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }
    while(1){
        int max_index = -1;
        printf("Q:");
        scanf("%d", &quiry);
        if(quiry == 0){
            break;
        }

        for(i = 0; i < 10; i++){
            if( n[i] <= quiry && (max_index == -1 || n[i] > n[max_index])){
                max_index = i;
            }
        }

        if(max_index != -1){
            printf("Max: %d\n", n[max_index]);
        }
    }
    return 0;
}