#include <stdio.h>

int main() {
  int arr[3] = {1, 2, 3};
  int (*parr)[3] = &arr;    // arr은 int*형 포인터, &arr은 int*[3]형 포인터

  printf("arr[1] : %d \n", arr[1]);
  printf("parr[1] : %d \n", (*parr)[1]);
}