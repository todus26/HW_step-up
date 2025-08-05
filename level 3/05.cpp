/*  상속
    파생 클래스의 구현
    클래스를 상속받은 파생 클래스 작성
*/

/*  클래스 상속: ColorPoint 클래스가 Point 클래스를 public으로 상속받습니다.
    접근 지정자: public, protected, private을 사용하여 멤버의 접근 범위를 지정합니다.
    생성자 초기화 리스트: 파생 클래스의 생성자에서 기본 클래스의 생성자를 호출합니다.
    멤버 함수 재정의: 파생 클래스에서 기본 클래스의 함수를 재정의합니다.
    protected 멤버: 파생 클래스에서 접근 가능한 protected 멤버를 사용합니다.*/

#include <iostream>
#include <string>
using namespace std;

class Point {                                                   // 기본 클래스 선언                
    int x, y;
    public:
        Point(int x, int y) {
            this->x = x; this->y = y;
        }
        int getX() { return x; }
        int getY() { return y; }

        protected:
            void move(int x, int y) { 
                this->x = x; this->y = y; 
                }
};

class ColorPoint : public Point {                               // 파생 클래스 선언
    string color;
    public:
        ColorPoint(int x, int y, string color) : Point(x, y) {
            this->color = color;
        }
        void setPoint(int x, int y) {
            move(x, y);
        }
        void setColor(string color) {
            this->color = color;
        }
        void show() {
            cout << color << "색으로 " << '(' << getX() << ',' << getY() << ')' << "에 위치한 점입니다." << endl;
        }
};

int main() {
    ColorPoint cp(5, 5, "RED");
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();
}