#include <stdio.h>

// int integers_formula(int N){


// }


int main(){

    int i = 1;
    int j = 1;

    // solution 1
    for(i = 1; i <= 30; i++){
        for(j = 1; i + j <= 30; j++){
            if(( i + j == 30) && (i * j == 221) && (i <= j) )
            {
                printf("%d, %d\n", i, j);
                break;
            }
        }
    }

    // solution 2
    for(i = 1; i <= 30 / 2; i++){
        for(j = 30 / 2; i + j <= 30; j++){
            if(( i + j == 30) && (i * j == 221) )
            {
                printf("%d, %d\n", i, j);
                break;
            }
        }
    }
    
    // solution 3
    for(i = 1; i <= 30 / 2; i++){
        j = 30 - i;
        if(i + j == 30 && i * j == 221)
        {
            printf("%d, %d\n", i, j);
            break;
        }

    }

    return 0;
}