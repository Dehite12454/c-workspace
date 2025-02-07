/*
사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 출력하도록 하세요. 
특히, 평균을 기준으로 평균 이상인 사람 옆에는 '합격', 아닌 사람은 '불합격' 을 출력하게 해보세요.
*/
#include <stdio.h>
int mkarray(int *parr,int size);
double avg(int arr[5],int size);
int compare(double a,double b);
int main(){
    int std1[5],std2[5],std3[5],std4[5],std5[5];
    double tavg;

    mkarray(std1,5);
    mkarray(std2,5);
    mkarray(std3,5);
    mkarray(std4,5);
    mkarray(std5,5);

    tavg = (avg(std1,5)+avg(std2,5)+avg(std3,5)+avg(std4,5)+avg(std5,5))/5;

    compare(avg(std1,5),tavg);
    compare(avg(std2,5),tavg);
    compare(avg(std3,5),tavg);
    compare(avg(std4,5),tavg);
    compare(avg(std5,5),tavg);

    return 0;
}

int mkarray(int *parr,int size){
    int a;
    for (a = 0;a<size;a++){
        scanf("%d",&parr[a]);
    }
    return 0;
}

double avg(int arr[5],int size){
    double avg;
    int sum = 0;
    int a;
    for (a = 0;a<size;a++){
        sum += arr[a];
    }
    avg = sum/size;
    return avg;
}

int compare(double a,double b){
    if (a>b){
        printf("합격\n");
    }
    else{
        printf("불합격\n");
    }
    return 0;
}