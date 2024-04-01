// 7 함수 정의 및 사용
// 7-2 함수의 값 반환
// 함수를 사용하여 factorial를 계산하는 프로그램을 작성하시오.

#include <stdio.h>

int factorial() {
    int n;
    int mul=1;

    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        mul*=i;
    }
    return mul;
}

int main() {
    int result= factorial();
    printf("%d",result);
    return 0;
}