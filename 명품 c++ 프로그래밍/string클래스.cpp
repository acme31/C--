#include <iostream>
#include <string>
using namespace std;
int main(){
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout<<song + "를 부른 가수는";
    cout << "(힌트 : 첫글자는 "<<elvis[0]<<")?";

    getline(cin, singer); // 문자열 입력
    if(singer == elvis) // 문자열 비교
        cout << "맞았습니다."<< endl;
    else
        cout << "틀렸습니다. " + elvis + "입니다." << endl; // + 로 문자열 연결
}   