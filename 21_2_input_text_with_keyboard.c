#include <stdio.h>
void str_read(char[]);

void str_read(char str[]){
    int i = 0;
    while(1){
        scanf("%c", &str[i]);
        if( str[i] == '\n'){
            break;
        }
        i++;
    }
    str[i ]= '\0';
}

int main(){
    char text[15];
    str_read(text);
    printf("%s\n", text);
    return 0;
}