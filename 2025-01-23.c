#include <stdio.h>

int add_number(int (*parr)[3]);
int main() {
  int arr[2][3] = {{2,3,3},{2,3,4}};

  add_number(arr);

  printf("배열의 각 원소 : %d, %d, %d", arr[0][0], arr[0][1], arr[0][2]);

  return 0;
}

int add_number(int (*parr)[3]) {
  int (*arr1)[3];
  int i;
  arr1 = parr;
  for (i = 0; i < 3; i++) {
    arr1[0][i] += 1;
  }
  return 0;
}