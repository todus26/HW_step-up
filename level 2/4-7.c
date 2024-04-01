// 4 구조체
// 4-7 중첩된 구조체 정의와 멤버 사용
// 학생들의 이름과 생일을 BirthDay 구조체에 함께 저장하려 한다. BirthDay의 멤버 변수는 문자형 포인터 name과 Date 구조체를 가지는 bday로 이루어져 있다. Date 구조체는 정수형 멤버 변수 year, month, day로 이루어져 있다. 이를 코드로 구현하고 자신의 이름과 생일을 바탕으로 구조체 변수를 만들어 값을 출력하시오.

#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

struct BirthDay {
    char* name;
    struct Date bday;
};

int main(void) {
    struct BirthDay b;
    b.name = "Gildong";
    b.bday.year = 1900;
    b.bday.month = 1;
    b.bday.day = 1;
    printf("%s\n", b.name);
    printf("%d %d %d", b.bday.year, b.bday.month, b.bday.day);
    return 0;
}