#include<iostream>
using namespace std;
template <typename T>
inline T SQUARE(T x){
    return x*x;
}

int main(void){
    cout<<SQUARE(5.5)<<endl;
    cout<<SQUARE(12)<<endl;
    return 0;
}

// 범용함수인 템플릿이라는 것을 사용하면 매크로 함수와 마찬가지로
// 자료형에 의존적이지 않은 함수가 완성됨.