// 8 배열 정의 및 사용
// 8-3 1차원 배열 원소의 입출력
// 크기가 5인 정수형 1차원 배열을 선언하고 모든 원소를 입력 받은 후, 원소의 역순으로 출력하시오.

#include <stdio.h>
int main(void) {
    int arr[5];
    int i, j;

    for(i=0; i<5; i++)
    scanf("%d", &arr[i]);

    for(i=4; i>=0; i--)
    printf("%d ", arr[i]);
    return 0;
}   