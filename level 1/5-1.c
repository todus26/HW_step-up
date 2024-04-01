// 5 반복문
// 5-1 조건이 만족하는 동안 반복 실행
// 반드시 while문을 사용하여 프로그램을 작성한다.

#include <stdio.h>

int main() {
    int n = 1;
    int a;
    int sum = 0;

    scanf("%d", &a);

    while (n <= a) {
        sum += n;
        ++n;
    }
    printf("%d", sum);
    return 0;
}