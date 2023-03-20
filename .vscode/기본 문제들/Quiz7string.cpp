#include<iostream>
#include<string>
using namespace std;
int main() {
    string name;
    string pass;
    string re_pass;
    cout << "이름 입력:";
    getline(cin,name);
    
    cout << "암호 입력:";
    getline(cin,pass);

    cout << "다시 입력:";
    getline(cin,re_pass);

    if(pass==re_pass){
        cout << name<<"님께서 로그인 하셨습니다" << endl;
    }
    else{
        cout << name<<"님, 다시 입력하세요." << endl;
    }
    return 0;
}