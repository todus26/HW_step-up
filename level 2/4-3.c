// 4 구조체
// 4-3 구조체 멤버 입출력
// 2차원 평면의 x좌표 값과 y좌표 값을 담을 수 있는 구조체 pos를 작성하고 두 정수를 입력받아 x, y 멤버 변수를 해당 값으로 초기화 한 뒤 출력하시오.

#include <stdio.h>

struct pos {
    int x;
    int y;
};

int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    struct pos p = {a,b};

    printf("%d %d", p.x, p.y);
    return 0;
}