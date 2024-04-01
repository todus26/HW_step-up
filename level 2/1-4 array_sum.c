// 1 배열 정의 및 사용
// 1-4 2차원 배열을 함수 매개변수로 전달
// 정수 1개를 입력받아 모든 원소가 입력받은 정수를 가지고 크기가 5*5인 정수형 2차원 배열을 선언한 뒤, 배열의 모든 원소의 합을 구해주는 sum() 함수를 만들어 모든 원소의 합을 출력하시오.

#include <stdio.h>

void sum(int arr[][5]) {
    int result=0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
        result += arr[i][j];
        }
    }
    printf("%d", result);
}

int main(void) {
    int num=0;
    scanf("%d", &num);
    int arr[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
        arr[i][j] = num;
        }
    }
    sum(arr);
}