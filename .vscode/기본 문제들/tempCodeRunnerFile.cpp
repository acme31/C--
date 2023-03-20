
#include <iostream> 
#include <string> 
using namespace std; 
int main() {
    string question[] = { "개", "고양이","기린","코끼리","표범"}; 
    string answer[] = { "dog","cat","giraffe","elephant","leopard"};
    string an[] = {"","","","",""};
    string ox; //맞은때마다O,틀릴때마다X추가
    int score(0);
    cout << "영단어로 바꾸세요." << endl; 
    for(int i=0; i<5; i++) {
        cout << question[i] << " : ";
        getline(cin,answer[i]);
        if(question[i]==answer[i]){
            ox+'O';
            score+=20;
        }
        else{
            ox+'X';
        }
    // 여기 코딩. 점수는 단어 한 개당 20점
    }
    cout << "==> " << ox << " " << score << " 점입니다." << endl;
    return 0;
} // main