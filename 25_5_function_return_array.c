#include <stdio.h>
int max(int *, int);

// int max(int nums[], int n){
//     int max = nums[0];
//     int i = 0;
//     for(i = 1; i < n; i++){
//         if(nums[i] > max){
//             max = nums[i];
//         }
//     }
//     return max;
// }

int max(int *nums, int n){
    int max = *nums;
    int i = 0;
    for(i = 1; i < n; i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    return max;
}

int main(){
    int nums_1[] = {8,8,9,8};

    printf("max: %d\n", max(nums_1, 4));
    return 0;
}   