#include <iostream>
using namespace std;

int main()
{
    int a, b, c, H, M; // 입력값 a b c, 시간 분 저장할 변수 선언
    
    cin >> a >> b; // 시간 분
    cin >> c; // 오븐 시간 (분 단위)

    if(b + c < 60) // 원래 시간 + 오븐 시간이 60분보다 작으면
    {
        H = a; // a 는 그대로 완료시간 ( 시간 )
        M = b + c; // M 은 b와 c를 더한 시간 ( 분 )
    }
    else // b와 c의 합이 1시간이 넘는다면
    {
        H = (a + (b + c)/60) % 24; //시간을 더한 후 24 나머지를 하는 이유는 24시를 넘어갈 경우를 대비한 나머지 연산
        M = (b + c) % 60; // b와 c를 더한 나머지가 남은 분이 됨
    }
    
    cout << H << " " << M << endl;
    return 0;
}