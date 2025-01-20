#include <stdio.h>  //n줄인 역삼각형 그리기
int main(){
    int num;
    printf("what is your number?\n");
    scanf("%d",&num);

    int b;
    int c;
    for (c = num-1;c>=0;c--){
        for (b = 1; b<num*2 ;b++){
            if (b>=num-c && b<=num+c){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}