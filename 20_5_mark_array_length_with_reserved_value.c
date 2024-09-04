#include <stdio.h>
int array_length(int[]);
int maximum_in_array(int[]);

int array_length(int n[]){
    int i = 0;
    // use -1 or 0 etc. the number that not useed to in array be a reserved value
    while(n[i] != -1){
        i++;
    }
    return i;
}

int maximum_in_array(int n[]){
    int max = n[0];
    int i = 0;
    while(n[i] != -1){
        if(n[i] > max){
            max = n[i];
        }
        i++;
    }
    return max;
}

int main(){
    int n3[] = {1, 2, 3, -1};
    int n5[] = {1, 2, 3, 4, 5, -1};
    printf("%d\n", array_length(n3));
    printf("%d\n", maximum_in_array(n5));
    return 0;
}