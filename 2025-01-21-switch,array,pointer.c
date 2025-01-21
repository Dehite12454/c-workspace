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

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Array 11 번째 원소? : %d \n ", arr[10]);  // 다른 데이터가 들어있는 저장소에 접근한것이다.
    /*
    더 안좋은 일은 해당 부분의 값을 다른 값으로 덮어 씌울 경우 입니다. 예를 들어서 해당 영역을 b 라는 변수가 사용하고 있었다고 해봅시다. 
    그러면 arr[10] = 3 을 한다면 마치 b = 3 을 한 듯한 효과를 내겠죠? 이는 정말 찾기 힘든 어려운 버그로 이어질 가능성이 높습니다.
    */

  int total = 3;
  int arr[total]; // 오류 배열의 크기는 변수를 통해 규정할 수 없다.(하지만 동적 할당을 통하면 가능하다.)

  int total;
  printf("전체 학생수 : ");
  scanf("%d", &total);
  int arr[total]; // 오류 변수의 선언은 프로그램 최상단에서 전부 이루어져야 한다.


  const int d = 3;  // 상수 값은 절대 불변이다.


  int arr[3] = {1}; // int arr[3] = {1, 0, 0};처럼 컴퓨터가 받아들인다. 이는 변수를 초기화하지 않았을 때 오류가 나는 것들 중 예외사항이다.

  int arr[3];
  arr[0] = 1; // 이러면 오류가 발생한다.


  
  return 0;
}