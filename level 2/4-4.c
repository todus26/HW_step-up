// 4 구조체
// 4-4 구조체를 함수의 매개 변수로 전달
//2차원 평면의 x좌표 값과 y좌표 값을 담을 수 있는 구조체 pos를 작성하고 두 정수를 입력받아 x, y 멤버 변수를 해당 값으로 초기화 하시오. 그 후 pos 구조체를 매개변수로 가지는 swap() 함수를 만들고 swap() 함수 내에서 x,y 좌표를 서로 바꾼 뒤 출력하시오.

#include <stdio.h>

struct pos {
    int x;
    int y; 
};

void swap(struct pos p) {
    int temp;
    temp = p.x;
    p.x = p.y;
    p.y = temp;
    printf("%d %d", p.x, p.y);
}

int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    struct pos p = {a,b};
    swap(p);
    return 0;
}