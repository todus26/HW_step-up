// 7 함수 정의 및 사용
// 7-4 재귀 함수
// 재귀함수를 사용하여 factorial 함수를 작성하시오.

#include <stdio.h>

int factorial(int n){
    if(n<=1) 
        return 1;
    else
        return n*factorial(n-1);
}

int main() {
    int n;
    int fact;

    scanf("%d", &n);

    fact=factorial(n);
    printf("%d", n, fact);

    return 0;
}