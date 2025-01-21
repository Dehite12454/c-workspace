#include <stdio.h>
int main() {
  int input;

  printf("마이펫 업그레이드\n");
  printf("무엇을 하실 것인지 입력하세요 \n");
  printf("1. 밥주기 \n");
  printf("2. 씻기기 \n");
  printf("3. 재우기 \n");

  scanf("%d", &input);

  switch (input) {  // 이처럼 input값은 정수형을 받아야 한다. char또한 정수값이므로 switch 문에 들어갈 수 있다.
    case 1:
      printf("아이 맛있어 \n");
      break;

    case 2:
      printf("아이 시원해 \n");
      break;

    case 3:
      printf("zzz \n");
      break;

    default:
      printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
      break;
  }

  //컴퓨터가 실수를 표현하는 원리-강좌 참고해서 블로그 쓰기

  int a;
  double b;

  b = 2.4;
  a = (int)b; //형변환을 하여서 오류가 없도록 하였다.

  printf("%d", a);

  return 0;
}