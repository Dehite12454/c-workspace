// 배열을 오름차순으로 변형시키기
#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int arr[5] = {5,8,2,6,9};
    int min;
    int temp;
    int index;

    for (a; a<4; a++){
        min = arr[a];
        for (b = a;b<5;b++){
            if (min>arr[b]){
                min = arr[b];
                index = b;
            }
        }

        if(a != index){
            temp = arr[a];
            arr[a] = min;
            arr[index] = temp;
        }
        
    }

    for (a = 0; a<5; a++){
        printf("%d\n",arr[a]);
    }

    return 0;
}