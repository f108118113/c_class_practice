#include <stdio.h>

// quiry array number
int main(){
    int i = 0;
    int n[5] = {0};
    int quiry = 0;
    
    for(i = 0; i < 5; i++){
        printf("%d:", i + 1);
        scanf("%d", &n[i]);
    }
    while(1){
        printf("Q:");
        scanf("%d", &quiry);
        if( quiry <=5 & quiry >0){
            printf("%d\n", n[quiry-1]);
        }
        else if (quiry == 0) {
            break;
        }
        else{
            printf("Please input 1 ~ 5! \n");
        }
    }

}