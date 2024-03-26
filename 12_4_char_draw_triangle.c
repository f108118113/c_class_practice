#include <stdio.h>

int second_draw_hollow_triangle(int N){
    int i;
    int j;
    printf("*\n");

    for(i = 0; i<=N-3 ; i++)
    {
        printf("*");
        for(j = 1; j<=i; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(i = 1; i <= N; i++){
        printf("*");
    }
    printf("\n");
    return 0;
}


int draw_hollow_triangle(int N){
    int i;
    int j;
    for(i = 1; i <= N; i++){
        for(j = 1; j <= i; j++){
            if(j==1 || j==i || i==N){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int draw_triangle(int N){
    
    int i;
    int j;
    for(i = 1; i <= N; i++){
        for(j = 1; j <= i; j++){
                printf("*");
        }
        printf("\n");
    }
    return 0;
}

int draw_reverse_triangle(int N){
    int i;
    int j;
    for(i = 1; i <= N; i++){
        
        for(j = 1; j <= N; j++){
            if( i+j >= N+1 ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int draw_reverse_hollow_triangle(int N){
    
    int i;
    int j;
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if( i+j == N+1 | j == N | i == N){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int draw_downside_triangle(int N){
    int i;
    int j;
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if( i <= j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int draw_downside_hollow_triangle(int N){
    
    int i;
    int j;
    for(i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if( i==j | j == N | i == 1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}



int main(){
    int N;
    printf("N = ");
    scanf("%d",&N);
    draw_triangle(N);
    printf("\n");
    draw_reverse_triangle(N);
    printf("\n");
    draw_reverse_hollow_triangle(N);
    printf("\n");
    draw_downside_triangle(N);
    printf("\n");
    draw_downside_hollow_triangle(N); 
    printf("\n");
    draw_hollow_triangle(N);
    printf("\n");
    second_draw_hollow_triangle(N);

    return 0;

}