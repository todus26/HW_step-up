// 4 구조체
// 4-8 구조체 포인터의 사용
// 2차원 평면의 x좌표 값과 y좌표 값을 담을 수 있는 구조체 pos를 작성하고 두 정수를 입력받아 x, y 멤버 변수를 해당 값으로 초기화하여 pos 구조체 변수 2개를 만들고 구조체 포인터를 가지는 swap() 함수를 통해 두 pos 구조체 변수의 값을 서로 바꾼 뒤 main()함수에서 출력하시오.

#include <stdio.h>

struct pos {
    int x;
    int y;
};

void swap(struct pos* p1, struct pos* p2) {
    struct pos temp = *p1;
    *p1 = *p2;
    *p2 = temp; 
}

int main(void) {
    int a,b;
    scanf("%d %d", &a, &b);
    struct pos p1={a,b}; 
    scanf("%d %d", &a, &b);
    struct pos p2={a,b};  
    swap(&p1, &p2);
    printf("%d %d\n", p1.x, p1.y);
    printf("%d %d", p2.x, p2.y);
    return 0;
}