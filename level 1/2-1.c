// 2 입출력
// 2-1 자료형에 따른 데이터 입력
// 정수, 실수, 문자를 입력받고 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
    int a;
    double b;
    char c;
    scanf("%d %lf %c", &a, &b, &c); 
    printf("%d\n%.2f\n%c", a, b, c);
    return 0;
}