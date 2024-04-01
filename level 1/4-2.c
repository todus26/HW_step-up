// 4 조건문
// 4-2 조건이 만족할 때와 만족하지 않을 때 서로 다른 실행문 실행
// 두 개의 정수를 입력 받아 더 큰 수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("%d", a);
    }
    else
        printf("%d", b);
    return 0;
}