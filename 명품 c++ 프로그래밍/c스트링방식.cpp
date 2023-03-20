#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "이름을 입력하시오 : ";
    string name;
    getline(cin, name);

    cout << "이름은 " << name << "입니다 \n";
}