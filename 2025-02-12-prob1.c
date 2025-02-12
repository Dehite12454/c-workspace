#include <stdio.h>  //길이가 최대 100 인 문자열을 하나 입력 받아서 문자열을 역순으로 출력하는 함수를 만들어보세요.

int reverse(char *pst);

int main(){
    char arr[100];
    scanf("%s",arr);
    reverse(arr);
    return 0;
}

int reverse(char *pst){
    int i = 0;
    while (*pst){
        pst++;
        i++;
    }

    pst--;

    while (i){
        printf("%c",*pst);
        pst--;
        i--;
    }

    return 1;
}