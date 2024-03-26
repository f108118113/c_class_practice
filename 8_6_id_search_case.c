#include <stdio.h>

int main(){
    int id;
    printf("input ID: \n");
    scanf("%d",&id);

    switch (id)
    {
        case 2:
        case 3:
        case 4:
            printf("John\n");
            break;
        case 13:
            printf("Mary\n");
            break;
        case 16:
            printf("Amy\n");
            break;
        default:
            printf("Not Found\n");
            break;
        }
        return 0;
}