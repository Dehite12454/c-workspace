#include <stdio.h>

int main(){
    char arr[100][3][30];
    arr[0][2][0] = 'd';
    arr[0][2][1] = 'c';
    printf("%s",arr[0][2]);

    char *parr = arr[0][2];
    printf("%d",*parr);
    parr++;
    printf("%d",*parr);
    return 0;
}