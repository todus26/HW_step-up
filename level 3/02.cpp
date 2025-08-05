/*  클래스 구현과 객체 생성
    주어진 설명에 따라 클래스를 구현하고 객체 생성
    클래스를 정의하고, 객체를 생성하고 기능을 실행하시오.
*/

#include <iostream>
using namespace std;

class Circle {
    private:
        int radius; 
    public:
        void set(int r);                // 원의 반지름 설정
        double getArea(); 
}; 

void Circle::set(int r) {               // 멤버 함수 정의
    radius = r;                         // 멤버 변수에 매개변수 값 대입
}

double Circle::getArea() {              // 넓이 계산
    return 3.14*radius*radius;
}

int main() {
    int r;  
    Circle won; 
    cin >> r; 
    won.set(r);  
    cout << won.getArea();
}
