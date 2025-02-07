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