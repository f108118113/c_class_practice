#include <stdio.h>

void bubble_sort(int arr[], int n){
    int i = 0;
    int j = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++)
        {
            if(arr[i]<arr[j]){
                int tmp; 
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }

}

void bubble_sort_2(){
    int n[5] = {0};
    int i = 0;
    int j = 0;

    for(i = 0; i < 5; i++ ){
        scanf("%d",&n[i]);
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4 - i; j++){
            if(n[j] > n[j+1]){
                int tmp;
                tmp = n[j];
                n[j] = n[j+1];
                n[j+1] = tmp;
            }
            printf("%d", n[j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 5; i++ ){
        printf("%d ",n[i]);
    }
}

int main(){
    bubble_sort_2();
    bubble_sort();
}
