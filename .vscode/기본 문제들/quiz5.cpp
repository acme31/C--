#include <iostream> 
using namespace std;
int main() {
    int kor, eng, mat, sum=0;
    /* 여기 코딩 */
    cout<<"국영수 점수 입력 : ";
    cin>>kor>>eng>>mat;
    sum = kor+eng+mat;
    cout<<"합계 = "<<sum<<"\n";
    cout<<"평균 = "<<(float)sum/3<<endl;
    return 0;
}