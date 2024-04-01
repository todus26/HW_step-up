// 2 입출력 
// 2-2 출력_자료형에 따른 데이터 출력
// 문자를 입력받고 문자형, 정수형, 실수형으로 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
    double b;
    char c;
    scanf("%c", &c);
    b=c;
    printf("%d\n%c\n%.2f", c, c, b);
    return 0;
}