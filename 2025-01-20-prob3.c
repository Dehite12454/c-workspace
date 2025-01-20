#include <stdio.h>  //합이 2000이 되는 a,b,c 집합 구하기(단 a>b>c 를 만족하는 자연수여야 한다.)
int main(){
    int a,b,c;
    int count = 0;
    for(a = 1;a<2000-1 ;a++){
        for (b = 1;b<2000-a;b++){
            c = 2000-a-b;
            if (a>b && b>c){
                count++;
            }
        }
    }

    printf("%d",count);

    return 0;
}