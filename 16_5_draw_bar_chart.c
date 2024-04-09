#include <stdio.h>

void bar_char(){
    int input[10] = {0};
    int summary[10] = {0};
    int i;
    int j;
    int k;
    printf("Enter 10 number: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &input[i]);
    }
    // 0-9,  10-19, 20-29, 30-39, 40-49, 50-59, 
    //60-69, 70-79, 80-89, 90-100
    for(j = 0; j < 10; j++){
        for(k = 0; k < 10; k++)
        {
            if(input[j] <= k*10+9 && input[j] >= k*10)
            {
                summary[k]++;
            }
            else if(input[j] == 100){
                summary[9]++;
                break;
            }
        }
    }

    for(i = 0; i < 10; i++){
        if(i==9){
            printf("%2d -%3d: ", i*10 , i*10+10 );
        }
        else{
            printf("%2d -%3d: ", i*10 , i*10+9 );
        }
        for(j = 0; j < summary[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


void bar_char_2(){
    int input[10] = {0};
    int summary[10] = {0};
    int i;
    int j;
    int k;
    printf("Enter 10 number: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &input[i]);
    }
    //   0-10, 11-20, 21-30, 31-40, 41-50, 
    //  51-60, 61-70, 71-80, 81-90, 91-100
    for(j = 0; j < 10; j++){
        for(k = 0; k < 10; k++)
        {
            if(input[j] < k*10+11 && input[j] > k*10)
            {
                summary[k]++;
            }
            else if(input[j] == 0){
                summary[0]++;
                break;
            }
        }
    }

    for(i = 0; i < 10; i++){
        if(i==0){
            printf("%2d -%3d: ", i*10 , 10 );
        }
        else{
            printf("%2d -%3d: ", i*10+1 , i*10+10);
        }
        for(j = 0; j < summary[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void bar_char_3(){
    int input = 0;
    int summary[10] = {0};
    int i;
    int j;
    printf("Enter 10 number: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &input);
        if(input>=1){
            summary[(input-1)/10]++;
        }
        else if(input == 0){
            summary[0]++;
        }
    }
    //   0-10, 11-20, 21-30, 31-40, 41-50, 
    //  51-60, 61-70, 71-80, 81-90, 91-100

    for(i = 0; i < 10; i++){
        if(i==0){
            printf("%2d -%3d: ", i*10 , 10 );
        }
        else{
            printf("%2d -%3d: ", i*10+1 , i*10+10);
        }
        for(j = 0; j < summary[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


int main(){

    // bar_char();
    // bar_char_2();
    // bar_char_3();
    return 0;
}