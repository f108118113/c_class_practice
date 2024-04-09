#include <stdio.h>

int max10(int n[10]);
double average10(int n[10]);

void number_statistic(){
    int i = 0;
    int n;
    int max;
    int sum;

    scanf("%d", &n);
    max = sum = n;
    for(i = 1; i < 10; i++){
        scanf("%d", &n);
        if( n >= max ){
            max = n;
        }
        sum += n;
    }
    printf("max: %d\naverage: %.2f\n", max, sum/10.0);
}

void number_statistic_2(){
    int i = 0;
    int n;
    int max;
    int sum = 0;

    for(i = 0; i < 10; i++){
        scanf("%d", &n);
        if( i == 0 || n > max ){
            max = n;
        }
        sum += n;
    }
    printf("max: %d\naverage: %.2f\n", max, sum/10.0);
}

int max10(int n[10]){
    int max = n[0];
    int i = 0;
    for(i = 0; i < 10; i++){
        if(n[i] > max){
            max = n[i];
        }
    }
    return max;
}
double average10(int n[10]){
    int sum = 0;
    int i = 0;
    for(i = 0; i < 10; i++){
        sum += n[i];
    }
    return sum/10.0;
}

void number_statistic_module(){
    int i = 0;
    int n[10] = {0};

    for(i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }
    
    printf("max: %d\naverage: %.2f\n", max10(n), average10(n));

}


int main(){
    number_statistic();
    number_statistic_2();
    number_statistic_module();
    return 0;
}