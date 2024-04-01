// 7 함수 정의 및 사용
// 7-3 함수의 인자 사용
// 두 개의 정수를 매개변수로 전달 받아 덧셈 결과를 반환하는 함수를 작성하시오.

#include <stdio.h>

int add(int a, int b) {
    int c;
    c = a + b;  
    return c;
}

int main() {
    int a, b;
    int result;

    scanf("%d", &a);
    scanf("%d", &b); 
    result = add(a, b); 
    printf("%d\n", result);

    return 0;
}