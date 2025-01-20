#include <stdio.h>  //소인수 분해
int main(){
    int N;
    int temp;
    int i;
    printf("what is your number?");
    scanf("%d",&N);

    temp = N;
    printf("%d = ",N);

    for (i = 2;i<=N;i++){
        for (;;){ 
            if (temp%i != 0){
                break;
            }
            else {
                printf("%d",i);
                temp = temp/i;
                if (temp == 1){
                    break;
                }
            }
            printf("*");
        }
    }
    return 0;
}