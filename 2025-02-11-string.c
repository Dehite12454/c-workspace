#include <stdio.h>

int sum(char *sum, char *arr);  //arr을 sum에 합치는 함수
int str_length(char *str);  //str의 길이를 세는 함수
int main(){
    char arr[7] = "abc";
    char arr2[4] = "def";

    sum(arr,arr2);

    printf("%s",arr);

    return 0;

}

int sum(char *sum, char *arr){
    int len = str_length(sum);  //sum의 길이

    while(len){
        sum++;
        len--;
    }

    while(*arr){
        *sum = *arr;
        arr++;
        sum++;
    }

    *sum = '\0';

    return 0;

}

int str_length(char *str) {
  int i = 0;
  while (str[i]) {
    i++;
  }

  return i;
}