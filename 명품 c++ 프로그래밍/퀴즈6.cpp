#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100] = "안녕하세요?";
    char b[100] = "날씨가 참 좋군요.";
    char c[100] = "안녕히 계세요!";
    int i;
    cout << "함수 사용" << endl;
    cout << strlen(a) << " " << strlen(b) << " " << strlen(c) << endl;

    cout << "반복문으로 계산" << endl;
    for(i=0; i<=100; i++){
        if(a[i]==NULL){
            cout << i << " ";
            break;
        }
    }
    for(i=0; i<=100; i++){
        if(b[i]==NULL){
            cout << i << " ";
            break;
        }
    }
    for(i=0; i<=100; i++){
        if(c[i]==NULL){
            cout << i << " " << endl;
            break;
        }
    }
    return 0;
}