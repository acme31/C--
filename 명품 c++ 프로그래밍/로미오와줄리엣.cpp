#include <iostream>
#include <string>
using namespace std;
int main(void){
    string s;
    cout<<"로미오>>";
    getline(cin,s);
    string t;
    cout<<"줄리엣>>";
    getline(cin,t);
    if(s == "가위" && t == "바위")
        cout << "줄리엣이 이겼습니다. " <<endl;
    else if (s=="가위" && t == "보")
        cout << "로미오가 이겼습니다. " <<endl;
    else if (s=="가위" && t == "가위")
        cout << "비겼습니다. " <<endl;
    else if (s=="바위" && t == "바위")
        cout << "비겼습니다. " <<endl;
    else if (s=="바위" && t == "보")
        cout << "줄리엣이 이겼습니다. " <<endl;
    else if (s=="바위" && t == "가위")
        cout << "로미오가 이겼습니다. " <<endl;
    else if (s=="보" && t == "보")
        cout << "비겼습니다. " <<endl;
    else if (s=="보" && t == "바위")
        cout << "로미오가 이겼습니다. " <<endl;
    else if (s=="보" && t == "가위")
        cout << "로미오가 이겼습니다. " <<endl;
    else
        cout<<"잘못 입력하셨습니다."<<endl;
    
    return 0;
}