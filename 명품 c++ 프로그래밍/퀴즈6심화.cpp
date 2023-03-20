#include<iostream>
#include<cstring>
using namespace std;
void chlen(char o[]){
    int i, len;
    for(i=0,len=0; o[i]!=NULL; i++) len++;
    cout << len << " ";
}
int main(){
    char a[100] = "안녕하세요?";
    char b[100] = "날씨가 참 좋군요.";
    char c[100] = "안녕히 계세요!";
    cout << "함수 사용" << endl;
    cout << strlen(a) << " " << strlen(b) << " " << strlen(c) << endl;

    cout << "반복문으로 계산" << endl;
    chlen(a);
    chlen(b);
    chlen(c);
    cout << endl;
    
    return 0;
}