#include <iostream>
using namespace std;

int main(){
    char arr[5];

    cout << "문자열을 입력하시오 : ";
    cin.getline(arr,5); // cin>> 으로 입력받으면 길이가 초과될 시 런타임 오류 발생 / cin.getline() 사용하면 길이 자동 제한

    cout << "***" << arr << "***\n";

    return 0;
}