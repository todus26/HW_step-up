// 1 변수의 선언과 사용
// 1-2 변수 초기화
// 입력받은 정수의 길이를 반지름으로 갖는 원의 둘레를 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
    int r;
    double pi=3.14;
    double cir=0;
    scanf("%d", &r);
    cir= 2*r*pi;
    printf("%f", cir);
    return 0;
}