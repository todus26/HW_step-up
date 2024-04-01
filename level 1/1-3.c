// 1 변수의 선언과 사용
// 1-3 변수 사용을 통한 수식 표현
// 입력받은 정수의 길이를 반지름으로 갖는 원의 넓이를 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
    int r;
    double pi=3.14;
    double area;
    scanf("%d", &r);
    area= r*r*pi;
    printf("%.2f", area);
    return 0;
}