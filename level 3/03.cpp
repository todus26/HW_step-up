/*  클래스의 구현 2
    실세계의 객체를 클래스로 작성
    프로그램 설명에 따라 클래스를 작성하여 프로그램을 완성하시오.
      <실행 조건>
        은행에서 사용하는 프로그램을 작성하기 위해 은행 계좌 하나를 표현하는 클래스 Account를 작성한다. 
        이 때 계좌는 다음의 3개 멤버로 이루어진다. 
        (1) 예금주명(한글 10자 이하), 
        (2) 계좌번호(15자리 이하), 
        (3) 잔액(1억 이하)
*/

#include <iostream>
#include <string>
using namespace std;

class Account {
    string name;                                        // 예금주명
    string id;                                          // 계좌번호               
    int balance;                                        // 잔액
    public:
        Account(string n, string i, int bal);           // 생성자
        void deposit(int money);                        // 입금
        int withdraw(int money);                        // 출금
        int inquiry();                                  // 잔액 조회
        string getOwner() { return name; }              // 예금주명 반환 (인라인 함수)
};

Account::Account(string n, string i, int bal) {         // 생성자 정의   
    name = n;                                           // 멤버 변수에 매개변수 값 대입
    id = i;                     
    balance = bal;
}

void Account::deposit(int money) {
    balance += money;
}

int Account::withdraw(int money) {
    if (money > balance) { 
        money = balance;
        balance = 0;
    }
    else
        balance -= money;
    return money; 
}

int Account::inquiry() {
    return balance;
}

int main() {
    Account a("홍길동", "11-111", 50000); 
    a.deposit(500000);  
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(200000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}