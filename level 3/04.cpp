/*  함수 중복, 디폴트 매개변수, 기변 인자
    서로 다른 인자를 전달하는 같은 이름의 함수(메소드) 구현
    함수 중복이나 디폴트 매개 변수를 이용하여 실행 결과에 맞추어 함수를 작성하시오.
*/

/*  함수 오버로딩: 같은 이름의 함수를 다른 매개변수로 여러 개 정의합니다.
    배열 매개변수: 함수에 배열을 전달하는 방법을 보여줍니다.
    표준 입출력: iostream을 사용하여 결과를 출력합니다.*/

#include <iostream> 
using namespace std; 

void Add(int x, int y) { 
    cout<< x+y << endl;
}
void Add(double x, double y) { 
    cout << x+y<< endl;
}
void Add(int x[], int y, int z) { 
    for(int i = 0; i<y; i++) {
        x[i] += z;
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    int ary[5] = {1,2,3,4,5};
    Add(5, 9);
    Add(3.5, 2.7);
    Add(ary, 5, 10);
}