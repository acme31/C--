#include<iostream>
#include<string>
using namespace std;
int main(){
    string movie("Top Gun"); //string movie = "Top Gun"; 가능
    string answer("Tom Cruise"); // int a=5; , int a(5); 자유
    string input;

    cout << movie + "의 주인공은?"; // +로 문자열 연결
    cout << "(힌트 : 첫글자는 "<< answer[0] <<")?"; // answer.at(0) 해도 됨

    getline(cin, input); //cin >> input과의 차이점
    // cin.getline(변, 길, 끝) char 배열 사용할 때
    // string, 공백포함 할려면 getline 전역함수 사용 (함수명 호출)
    // cin.getline != getline 이다. 혼동하지 않기!

    // c++ string 에서는 바로 바교 가능 / 자바는 안됨
    if (input == answer) // string 은 char 배열과는 달리 이퀄기호 이용해서 비교 가능
        cout << "맞았습니다." << endl;
    else
        cout << "틀렸습니다. " + answer + "입니다." << endl;

    return 0;
}
/*
    c++ 에서는 string 도 문자열 배열처럼 쓸 수 있다.
*/