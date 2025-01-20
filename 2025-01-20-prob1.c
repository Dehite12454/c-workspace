#include <stdio.h>
int main(){
    int num;
    printf("what is your number?\n");
    scanf("%d",&num);

    int b;
    int c;
    for (c = 0;c<num;c++){
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
}