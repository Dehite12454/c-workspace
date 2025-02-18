#include <stdio.h>
int main() {
  int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

  arr++;  // 오류
  return 0;
}
/*
배열의 이름이 첫 번째 원소를 가리키는 포인터로 타입 변경 된다고 했을 때, 이는 단순히 배열의 첫 번째 원소를 가리키는 주소값 자체가 될 뿐입니다. 
따라서 arr++ 문장은 C 컴파일러 입장에서 다음을 수행한 것과 같습니다.
(0x7fff1234) ++; 
*/

//포인터의 포인터는 다음과 같이 정의합니다.
//int **p;

//int (*parr)[3] = &arr;
//&arr 을 보관할 포인터는 크기가 3 인 배열을 가리키는 포인터가 되어야 할 것입니다. 그리고 C 언어 문법상 이를 정의하는 방식은 위와 같습니다.

//참고로 parr 을 정의할 때 *parr 을 꼭 () 로 감싸야만 하는데, 만일 괄호를 빼버린다면
//int *parr[3]
//와 같이 되어서 C 컴파일러가 int * 원소 3 개를 가지는 배열을 정의한 것으로 오해하게 됩니다


int main() {
  int arr[3] = {1, 2, 3};
  int(*parr)[3] = &arr;

  printf("arr : %p \n", arr);
  printf("parr : %p \n", parr);     //parr 과 arr 은 같은 값을 가진다는 점
}