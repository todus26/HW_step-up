// 5 반복문
// 5-4 반복 구조 내의 또 다른 반복 구조에 의한 반복 실행
// 이중 반복문을 사용하여 입력받은 정수만큼 별을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("*");
    }
    printf("\n");
    }
    return 0;
}