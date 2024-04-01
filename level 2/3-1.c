// 3 포인터
// 3-1 포인터를 이용한 매개변수 전달
// 두 정수를 입력받고 두 수의 값을 서로 바꾼 뒤 각각 출력하시오. 단, 포인터를 사용하여 s두정수의 값을 서로 바꾸는 wap() 함수를 작성하시오.

#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a,b);
}