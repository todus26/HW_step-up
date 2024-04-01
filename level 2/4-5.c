// 4 구조체
// 4-5 함수에서 구조체 반환
// 2차원 평면의 x좌표 값과 y좌표 값을 담을 수 있는 구조체 pos를 작성하고 두 정수를 입력받아 x, y 멤버 변수를 해당 값으로 초기화 하시오. 그 후 pos 구조체를 매개변수로 가지는 swap() 함수를 만들고 swap() 함수 내에서 x,y 좌표를 서로 바꾼 뒤 해당 구조체를 반환하여 메인 함수에서 구조체 pos의 x, y값을 출력하시오.

#include <stdio.h>

struct pos {
    int x;
    int y;
};

struct pos swap(struct pos p) {
    int temp;
    temp = p.x;
    p.x = p.y;
    p.y = temp;
    return p;
}

int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    struct pos p = {a,b};
    p = swap(p);
    printf("%d %d", p.x, p.y);
    return 0;
}
