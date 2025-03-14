#include <stdio.h>

int return_first(char *arr[][3][30]);

int main(){
    char library[100][3][30];

    library[0][0][0] = 'a';

    return_first(library);

    return 0;
}

int return_first(char *arr[][3][30]){   // 정석대로 *arr[][3][30]으로 포인터를 받아줘야지 프로그램 오류가 안난다.
    char s = arr[0][0][0];

    printf("%c",s);

    return 1;
}