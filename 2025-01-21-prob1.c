// 임의의 실수에서 소수점 이하 두자리수만 추출하여 정수형 변수에 대입하라.

#include <stdio.h>
int main(){

    float f;
    int i;

    printf("실수를 입력하시오 : ");
    scanf("%f", &f);

    i = (int)100*(f - (int)f); 
    printf("i=%d\n", i);
    return 0;
}