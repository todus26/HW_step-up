// 3 수식
// 3-2 연산자 우선순위를 고려한 다항식 계산
// (ax3 - bx2 + ax - b) * (a + b)를 해결하기 위한 프로그램을 제작하시오.

#include <stdio.h>

int main() {
    double result;
    int a, b, x;

    printf("a와 b, x를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &x);

    result = (a * x * x * x - b * x * x + a * x - b) * (a + b);
    printf("다항식의 결과는 %.2f 입니다.", result);
    return 0;
}