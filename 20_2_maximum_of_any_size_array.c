#include <stdio.h>
int arrayMax(int[], int);

int arrayMax(int n[], int N){
    // int N = 0;
    // N = sizeof(n)/int;
    int max = n[0];
    int i = 0;
    for(i = 1; i < N; i++){
        if(max < n[i]){
            max = n[i];
        }
    }
    return max;
}
int main(){
    int n[3] = { 1, 2, 3};
    printf("Max: %d/n", arrayMax(n, 3));
    return 0;
}