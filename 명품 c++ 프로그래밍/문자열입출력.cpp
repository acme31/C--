#include <iostream>
using namespace std;
int main() {
    cout << "이름을 입력하시오 >>";
    char name[11]; // 한글 5개, 영문 10까지 저장 가능
    cin >> name; //키보드로부터 문자열 읽기.

    cout << "이름은" << name << "입니다\n"; //이름 출력
    
}