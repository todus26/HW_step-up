// 5 반복문
// 5-3 조건이 만족하는 동안(또는 일정 횟수) 반복 실행
// for문을 사용하여 1부터 입력받은 정수까지 곱하는 조건문을 작성하시오.

#include <stdio.h>

int main() {
    int n;
    int mul = 1;

    printf("정수 n을 입력하세요: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        mul *= i;
    }

    printf("%d", mul);

    return 0;
}