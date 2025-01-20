#include <stdio.h>
int main(){
    char a;
    a = 'a';
    printf("a has number %d, and alphabet %c\n",a,a); // 간단한 아스키 코드는 암기하는 편이 유리하다. a는 97, A는 65 이다. 나머지는 1씩 올라간다.

    double celsius;
    printf("섭씨온도는? :");
    scanf("%lf",&celsius); 
    /*
    scanf는 double과 float 자료형을 입력받는 방식이 다르다. double은 %lf float는 %f이다.
    char은 %c, long은 %ld short는 %hd이다. 참고하자.
    */
    printf("그렇다면 화씨온도는 %f이다.\n",9*celsius/5 +32);

    int b = 1;
    if (b==0){
        printf("b is 0\n");
        return 0; //이렇게 if문 안에 return 0를 넣어서 프로그램을 종료시킬 수 있다.
    }
    printf("b is not 0\n");

    int num = 7;
    if (num == 7) {
    printf("a 행운의 숫자 7 이군요!\n");
    } else if (num == 7) {
    printf("b 행운의 숫자 7 이군요! \n");   //이처럼 else if는 if가 아닐때를 전제조건으로 가지므로 if를 만족하면 건너뛰어진다.
    };

    int height = 170;
    int weight;
    if (height >= 180 && weight >= 90) {    // height 가 180보다 작으므로 뒤의 참 거짓을 판별하지 않았다.이를 short circuit evaluation 이라고 말한다.
        printf("you are so small\n");
    };

    return 0;
}