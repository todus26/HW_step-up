// 4 조건문
// 4-4 여러 가지 조건에 따라 서로 다른 실행문 실행 2
//시험 점수를 입력했을 때, 해당 점수에 맞는 성적을 A~F까지 나타내는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
    }
    return 0;
}