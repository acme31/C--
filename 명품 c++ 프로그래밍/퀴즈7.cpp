#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char name[100];
    char pass[100];
    char re_pass[100];
    cout << "이름 입력:";
    cin.getline(name, 100, '\n');
    
    cout << "암호 입력:";
    cin.getline(pass, 100, '\n');

    cout << "다시 입력:";
    cin.getline(re_pass, 100, '\n');

    if(strcmp(pass,re_pass) ==0){
        cout << name<<"님께서 로그인 하셨습니다" << endl;
    }
    else{
        cout << name<<"님, 다시 입력하세요." << endl;
    }
    return 0;
}