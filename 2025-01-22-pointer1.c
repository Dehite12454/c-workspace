#include <stdio.h>
int main() {
  int a;
  int b;
  const int* pa = &a;       // pa라는 포인터가 가리키는 int 즉 a의 값이 const int라는 뜻이다.

  *pa = 3;  // 올바르지 않은 문장  a를 변경하였으므로
  pa = &b;  // 올바른 문장  pa라는 값은 const가 아니니 올바르다.
  return 0;
}


#include <stdio.h>
int main() {
  int a;
  int b;
  int* const pa = &a;

  *pa = 3;  // 올바른 문장  const pa 가 a의 주소를 가리키고 있다. 따라서 a는 const가 아니니 변경되어도 상관 없다.
  pa = &b;  // 올바르지 않은 문장   const pa이니 pa값은 &a에서 변경되면 안된다.

  return 0;
}

int main() {
  int a;    //4바이트
  char b;   //1바이트
  double c; //8바이트
  int* pa = &a;
  char* pb = &b;
  double* pc = &c;

  printf("pa 의 값 : %p \n", pa);
  printf("(pa + 1) 의 값 : %p \n", pa + 1); //위에 주소에 비해서 4만큼 더해진다.
  printf("pb 의 값 : %p \n", pb);
  printf("(pb + 1) 의 값 : %p \n", pb + 1); //위에 주소에 비해서 1만큼 더해진다.
  printf("pc 의 값 : %p \n", pc);
  printf("(pc + 1) 의 값 : %p \n", pc + 1); //위에 주소에 비해서 8만큼 더해진다.

    //배열들의 각 원소는 메모리 상에 연속되게 놓인다 따라서 이렇게 연산을 통해서 배열의 원소 주소간의 이동이 가능하다.
    //포인터는 자신이 가리키는 데이타의 '형' 의 크기를 곱한 만큼 덧셈을 수행하기 때문이죠.

    //근데 왜 4씩 증가이지? int 형 변수는 4바이트 저장공간을 가지고 있어서 32비트의 저장공간이 필요하지 않나?
  return 0;
}

int main() {
  int arr[3] = {1, 2, 3};
  printf("%d", arr);    //arr[0]의 주소값이 나오게 된다.
}

#include <stdio.h>
int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int* parr = arr;

  printf("Sizeof(arr) : %d \n", sizeof(arr));   //24이다. arr배열의 사이즈 즉 6*4바이트
  printf("Sizeof(parr) : %d \n", sizeof(parr)); //8이다. 64비트 운영체제에서 주소값의 사이즈 8바이트

  //따라서 배열의 이름과 배열을 가리키는 포인터는 엄밀히 말하면 다른것
  //C 언어 상에서 배열의 이름이 sizeof 연산자나 주소값 연산자(&)와 사용될 때 (예를 들어 &arr) 경우를 빼면, 
  //배열의 이름을 사용시 암묵적으로 첫 번째 원소를 가리키는 포인터로 타입 변환되기 때문입니다.
}

#include <stdio.h>
int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  printf("3[arr] : %d \n", 3 [arr]); //[] 는 연산자로 3[arr] 을 *(3+arr) 로 바꿔주기 때문에 arr[3] 과 동일한 결과를 출력할 수 있게 되지요.
  printf("*(3+a) : %d \n", *(arr + 3));
  return 0;
}

//int* arr[3] = {&num01, &num02, &num03}; // int형 포인터 배열 선언 이런것도 가능하다.