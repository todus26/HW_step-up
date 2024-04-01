// 2 문자 배열 정의 및 사용
// 2-2 문자열 입출력
// 한 줄의 문자열을 입력받아 저장하고 입력받은 문자열을 출력하시오.

#include <stdio.h>

int main(void) {
    char str[20];
    gets(str);
    printf("%s", str);
}