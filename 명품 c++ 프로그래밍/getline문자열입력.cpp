#include<iostream>
using namespace std;

int main() {
    cout << "주소를 입력하세요>>";

    char address[100];
    cin.getline(address, 100, '\n');

    cout<<"주소는 "<<address<<" 입니다\n"; 
}

// 문자가 공백 문자인지 판단하기 위한 함수 int isspace(char c)