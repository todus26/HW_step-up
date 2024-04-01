//1 배열 정의 및 사용
//1-3 2차원 배열 원소의 입출력
//정수 1개를 입력받아 모든 원소가 입력받은 정수를 가지고 크기가 5*5인 정수형 2차원 배열을 선언한 뒤, 모든 원소를 한 칸씩 띄어 출력하시오. 단, 행이 바뀔 때는 줄 바꿈을 해준다.

#include <stdio.h>

int main(void) {
    int num=0;
    scanf("%d", &num);

    int arr[5][5];

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
        arr[i][j] = num;
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
        rintf("%d ", arr[i][j]);
    }
    printf("\n");
    }
}