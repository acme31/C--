#include<iostream> // include에서 <>와 ""의 차이 : <> = 제공하는 것, "" = 우리가 만든 헤더파일, 보통 소스랑 같은 폴더에 만듦
using namespace std; // 확장자 .h 는 C언어에서 쓰던 것
//C++도 C 처럼 main만 실행하나요? : yes
int main(void){ // void main() 해도 되나요? : 되긴 하지만 비표준임. vs 에선 되지만 code block에선 안됨.
    cout<<"Hello\n"; // 실행파일 하나에 main 함수는 하나임. 프로젝트에 main 하나, 
    cout<<"첫 번째 맛보기입니다."<<endl; // C++함수중복 가능하다는데 main도 함수중복 가능? X
    return 0; // 생략 가능 main 에서만 int 지만 생략 가능 , 그러나 끝내주는 말임을 알기 편하기 때문에 선호.
}

/*
    주석은
*/
//C, C++, Java 동일