// 4 구조체
// 4-1 구조체 정의, 변수 선언 및 사용
// 2차원 평면의 x좌표 값과 y좌표 값을 담을 수 있는 구조체 pos를 작성하고 x 멤버 변수를 1, y 멤버 변수를 3으로 초기화 한 뒤 출력하시오. 단, 구조체 멤버 변수를 초기화할 때 "." 연산자를 사용하시오.

#include <stdio.h>

struct pos {
    int x;
    int y;
};

int main(void) {
    struct pos p;
    p.x = 1;
    p.y = 3;

    printf("%d %d", p.x, p.y);
    return 0;
}