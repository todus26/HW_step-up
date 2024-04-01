//1 배열 정의 및 사용
//1-2 2차원 배열 초기화
//크기가 5*5인 정수형 2차원 배열을 선언하고 모든 원소를 7로 초기화한 뒤 가장 마지막 원소를 출력하시오.
#include <stdio.h>
int main(void) {
    int arr[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            arr[i][j] = 7;
        }
    }
    
    printf("%d", arr[4][4]);
    return 0;
}
