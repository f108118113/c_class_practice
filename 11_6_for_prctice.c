#include <stdio.h>

int min()
{
    int i = 0;
    int count = 0;
    printf("max: ");
    for(i = 1; i <= 1000 && count < 3; i++){
        if(i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    return 0;
}

int max()
{
    int i = 0;
    int count = 0;
    printf("min: ");
    for(i = 1000; i >= 1 && count < 3; i--){
        if(i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    return 0;
}

int main(){
    max();
    min();

}