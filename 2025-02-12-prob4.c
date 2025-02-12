/*
문자열을 두 개 입력 받아서 먼저 입력받은 문자열에서 나중에 입력받은 문자열의 위치를 검색하는 함수를 만들어보세요. 
만일 없다면 -1 을 리턴하고 있다면 그 위치를 리턴합니다.
*/
#include <stdio.h>
int compare(char *pst, char *dst);
int search(char *pst, char *dst);
int main(){
    char arr1[100];
    char arr2[100];
    scanf("%s",arr1);
    getchar();
    scanf("%s",arr2);\

    printf("%d",search(arr1,arr2));
    return 0;
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
    
    return 1;
}

int search(char *pst, char *dst){
    int index = 0;
    while(*pst){
        if (compare(pst,dst) == 0){
            pst++;
            index++;
            continue;
        }
        else{
            return index;
        }
    }

    return -1;
}