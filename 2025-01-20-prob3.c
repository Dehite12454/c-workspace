#include <stdio.h>  //1000 이하의 3 또는 5 의 배수인 자연수들의 합을 구한다.
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