#include <stdio.h>

int main(){
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i;
    int flag=1;
    for(i = 2; i < N; i++)
    {
        if( N % i == 0){
            flag = 0;
        }
        if(flag!=1)
        {
            break;
        }
    }
    if(flag){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

}