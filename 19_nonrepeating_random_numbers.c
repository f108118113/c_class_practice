#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// generate 10 non-repeat random numbers

int use_flag(){
    srand(time(0));
    int flag = 0;
    int i = 0;
    int j = 0;
    int n[10] = {0};
    for(i = 0; i < 10; i++){
        do{
            n[i] = rand() % 10 + 1;
            flag = 0;
            for(j = 0; j < i; j++){
                if(n[i] == n[j]){
                    flag = 1;
                    break;
                }
            }
        }while(flag == 1);
        printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}

int no_flag(){
    srand(time(0));
    int i = 0;
    int j = 0;
    int n[10] = {0};
    for(i = 0; i < 10; i++){
        do{
            n[i] = rand() % 10 + 1;
            for(j = 0; j < i; j++){ // j = i will stop this for-loop
                if(n[i] == n[j]){
                    break; 
                    // if meet break, means this for-loop is interupt
                    // also means j is not equl i
                }
            }
        }while(j != i); // directly replace flag to j != i 
        printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}

int main(){
    use_flag();
    no_flag();
}