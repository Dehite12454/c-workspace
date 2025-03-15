#include <stdio.h>

int return_first(char arr[][3][30]);
int compare(char *dst, char *pst);
int make_arr(char (*arr)[3][30],int index);

int main(){
    char library[100][3][30];
    char pst[30] = {'a','b','c'};
    library[0][1][0] = 'a';
    library[0][1][1] = 'b';
    library[0][1][2] = 'c';

    char *pst2 = library[0][1];     // 이 의미에 대해 잘 알아보자/.

    pst2++;
    *pst2 = '\0';

    printf("%s",library[0][1]);

    if(compare(library[0][1],pst2)){ //이런식으로 비교하는 것도 가능하다.
        printf("great");
    }

    return 0;
}

int return_first(char arr[][3][30]){   // 정석대로 *arr[][3][30]으로 포인터를 받아줘야지 프로그램 오류가 안난다.
    char s = arr[0][0][0];

    printf("%c",s);

    return 1;
}

int compare(char *dst, char *pst){
    while (*pst){
        if (*pst == *dst){
            pst++;
            dst++;
        }
        else {
            return 0;
        }
    }

    if (*dst == '\0'){
        return 1;
    }
    
    return 0;
}

int make_arr(char (*arr)[3][30],int index){
    return 0;
}