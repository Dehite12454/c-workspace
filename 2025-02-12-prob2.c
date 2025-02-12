#include <stdio.h>  //길이가 최대 100 인 문자열을 입력 받아서 소문자는 대문자로, 대문자는 소문자로 출력하는 함수를 만들어보세요.

int swap(char *pst);
int main(){
    char arr[100];
    scanf("%s",arr);

    swap(arr);
    return 0;
}

int swap(char *pst){
    while (*pst){
        if (*pst > 95){
            printf("%c",*pst - 32);
            pst++;
        }
        else {
            printf("%c",*pst + 32);
            pst++;
        }
    }

    return 1;
}