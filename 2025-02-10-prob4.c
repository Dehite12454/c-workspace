#include <stdio.h>

int main(){
    int a;

    scanf("%d",&a);

    int arr[a];

    for (int b = 0;b<a;b++){
        arr[b] = 0;
        printf("%d\n",arr[b]);
    }
}