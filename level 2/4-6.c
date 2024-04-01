// 4 구조체
// 4-6 구조체 배열 선언과 원소 사용
// 2차원 평면의 x좌표 값과 y좌표 값을 담을 수 있는 구조체 pos를 작성하고 두 정수를 입력받아 x, y 멤버 변수를 해당 값으로 초기화 하시오. 총 3개의 (x,y) 좌표를 입력받고 입력받은 순서대로 일차원 구조체 배열에 저장한 뒤 배열 내 가장 마지막 (x,y) 좌표를 출력하시오.

#include <stdio.h>

struct pos {
    int x;
    int y;
};

int main(void) {
    int a,b;
    struct pos arr[3]; 
    for(int i=0; i<3; i++) {
        scanf("%d %d", &a, &b);
        struct pos p = {a,b};
        arr[i] = p;
    }
    printf("%d %d", arr[2].x, arr[2].y);
    return 0;
}
