#include <stdio.h>
 
int main(void) {
    int a[4];
    int *a[3];
    int b = 4;
    a[3] = &b;

    printf("%d",*a[3]);
 
    return 0;
}
