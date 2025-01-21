// 학생들의 성적을 막대 그래프로 나타내는 프로그램을 만들어 보세요.

#include <stdio.h>
int main(){
    int arr[5] = {90,40,20,100,80};
    int arr1[10][5];
    int a;
    int b;
    int score;
    int i = 0;

    for (b = 0;b<5;b++){
        score = arr[b]/10;
        for (a = 0;a<10;a++){
            if (10-score > 0){
                arr1[a][b] = 0;
            }
            else {
                arr1[a][b] = 1;
            }
            score++;
        }
    }

    for (a = 0;a<10;a++){
        for (b = 0;b<5;b++){
            if (arr1[a][b] == 0){
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    

    return 0;
}