/*  추상 클래스
    추상 클래스를 상속받아 클래스 작성
    추상클래스를 상속받아 클래스를 구현하고 함수 재정의
*/

/*  추상 클래스: Converter 클래스는 순수 가상 함수를 포함하는 추상 클래스입니다.
    순수 가상 함수: convert(), getSourceString(), getDestString()은 순수 가상 함수입니다.
    가상 함수: virtual 키워드를 사용하여 가상 함수를 선언합니다.
    상속: WonToDollar 클래스가 Converter 클래스를 상속받습니다.
    함수 오버라이딩: 파생 클래스에서 기본 클래스의 순수 가상 함수를 구현합니다.
    생성자 초기화 리스트: WonToDollar(double ratio) : Converter(ratio) { }
*/

#include <iostream>
#include <string>
using namespace std;

class Converter {
    protected:
        double ratio;
        virtual double convert(double src)=0; 
        virtual string getSourceString()=0; 
        virtual string getDestString()=0; 
    public:
        Converter(double ratio) { 
            this->ratio = ratio; 
        }
        void run() {
            double src;
            cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
            cout << getSourceString() << "을 입력하세요>> ";
            cin >> src;
            cout << "변환 결과 : " << convert(src) << getDestString() << endl;
        }
};

class WonToDollar : public Converter {
    protected:
        virtual string getSourceString() { return "원"; }
        virtual string getDestString() { return "달러"; }
        virtual double convert(double src);
    public:
        WonToDollar(double ratio) : Converter(ratio) { }
};

double WonToDollar::convert(double src) {
    return src/ratio;
}

int main() {
    WonToDollar wd(1250); // 1 달러에 1250원
    wd.run();
}