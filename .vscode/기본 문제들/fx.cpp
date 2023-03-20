#include<iostream>
using namespace std;
int main(void){
    int x, y;
    cout<<"좌표를 정수값으로 입력하시오 : ";
    cin>>x>>y;
    if(x>0&&y>0){
        cout<<"제 1사분면"<<endl;
    }
    else if(x>0&&y<0){
        cout<<"제 4사분면"<<endl;
    }
    else if(x<0&&y>0){
        cout<<"제 2사분면"<<endl;
    }
    else if(x<0&&y<0){
        cout<<"제 3사분면"<<endl;
    }
    else if((x==0&&y<0)||(x==0&&y>0)){
        cout<<"좌표는 y축에 존재합니다."<<endl;
    }
    else if((x>0&&y==0)||(x<0&&y==0)){
        cout<<"좌표는 x축에 존재합니다."<<endl;
    }
    else if(x==0&&y==0){
        cout<<"좌표는 원점에 존재합니다"<<endl;
    }
    else{
        cout<<"잘못 입력하셨습니다."<<endl;
    }
    return 0;
}