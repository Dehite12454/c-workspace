#include <stdio.h>  //두 개의 문자열을 입력 받아서 같다면 "같다", 다르면 "다르다" 라고 출력하는 함수를 만들어보세요.

int compare(char *pst, char *dst);
int main(){
    char arr1[100];
    char arr2[100];
    int tf;
    scanf("%s",arr1);
    getchar();
    scanf("%s",arr2);

    tf = compare(arr1,arr2);

    if (tf == 1){
        printf("같다.");
    }
    else {
        printf("다르다.");
    }
    return 0;
}

int compare(char *pst, char *dst){
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