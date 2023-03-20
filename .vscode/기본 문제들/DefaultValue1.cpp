#include <iostream>
using namespace std;
int Adder(int num1=1, int num2=2){
    return num1+num2;
}
int main(void){
    cout<<Adder()<<endl; // 함수를 호출하며 인자를 전달하지 않았으니, 1과 2가 전달된 것으로 간주된다.
    cout<<Adder(5)<<endl; // 이러한 경우 인자는 첫 번째 매개변수로 전달됨.
    cout<<Adder(3,5)<<endl; // 두 개의 인자를 직접 전달. 매개변수의 디폴트 값은 의미를 갖지 않는다.
}