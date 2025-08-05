/*  클래스의 구현 1
    2개의 생성자를 가진 클래스 구현
    클래스를 이용하는 프로그램과 실행 결과가 다음과 같도록 Tower 클래스를 작성하여 프로그램을 완성하시오.
*/

#include <iostream>
using namespace std;

class Tower {                           
    int height;                         // 타워 노핑 저장 변수 (지정 안 하면 private)
    public:
        Tower() { height = 1; }         // 높이 1 미터 (기본 생성자)
        Tower(int h);                   // 높이 h 미터 (매개변수 생성자)
        int getHeight();                // 높이 반환 (멤버 함수)
};   // 인라인 함수가 아닌 경우 클래스 외부에 구현해야 함

Tower::Tower(int h) {                   // :: 범위 지정 연산자 (클래스 외부에서 멤버 함수 정의 시 사용)
    height = h;
}

int Tower::getHeight() {                // 멤버 함수 정의
    return height;
}

int main() {
    Tower myTower;                      // 1 미터 (기본 생성자)
    Tower seoulTower(100);              // 100 미터 (매개변수 생성자)
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}