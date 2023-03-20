#include<iostream>
using namespace std;
double area(int r); // 함수 원형
int main(){
    int n=3;
    char c='#';
    cout << c << 5.5 << '-' << n << "Hello" << true << endl; // true는 1로 출력됨
    cout << "n + 5 = " << n + 5 << '\n';
    cout << "면적은 " << area(n) << endl; // 함수 area()의 리턴 값 출력
}
double area(int r){ // 함수 구현
    return 3.14*r*r;  // 반지름 r의 원 면적 리턴
}