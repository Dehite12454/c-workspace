//에라토스테네스의 체를 이용해서 1 부터 N 까지의 소수를 구하는 프로그램을 만들어보세요.

#include <stdio.h>

int seive(int *arr,int N,int prime);

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int prime = 2;

    for (int i = 0;i<N;i++){
        arr[i] = i+1;
    }

    printf("%d\n",prime);

    while (prime<N){
        int sum = 0;
        prime = seive(arr,N,prime);
        for (int i = 1;i<=N-prime;i++){
            if (arr[prime-1+i] == 0){
                continue;
            }
            else {
                sum += arr[prime-1+i];
            }
        }

        if (sum == 0){
            break;
        }
    }
    

    return 0;
}

int seive(int *arr,int N,int prime){
    int i;
    int m = N/prime;

    for (i = 1;i<m+1;i++){
        arr[prime*i-1] = 0;
    }

    for (i = 1;i<=N-prime;i++){
        if (arr[prime-1+i] == 0){
            continue;
        }
        else {
            printf("%d\n",prime+i);
            return prime+i;
        }
    }
}