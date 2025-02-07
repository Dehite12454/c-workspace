//유클리도 호제법을 이용해서 N 개의 수들의 최대공약수를 구하는 함수를 만들어보세요.
#include <stdio.h>
int uclyde(int a,int b);
int main(){
    int arr[2];
    int ans;
    scanf("%d",&arr[0]);
    while (1){
        scanf("%d",&arr[1]);
        if (arr[1] == 0){
            break;
        }
        else {
            ans = uclyde(arr[0],arr[1]);
            arr[0] = ans;
            continue;
        }
    }
    printf("%d",ans);
    return 0;
}

int uclyde(int a,int b){
    int temp;
    if (b>a){
        temp = a;
        a = b;
        b = temp;
    }
    if(a%b == 0){
        return b;
    }
    else {
        return uclyde(b,a%b);
    }
}