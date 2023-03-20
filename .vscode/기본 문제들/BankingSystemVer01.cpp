/*
    Banking System Ver 0.1
    OOP 단계벌 프로젝트 기본 틀 구성
    이민준
*/
#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN=20;

void ShowMenu(void);                // 메뉴출력
void MakeAccount(void);             // 계좌개설을 위한 함수
void DepositMoney(void);            // 입    금
void WithdrawMoney(void);           // 출    금
void ShowALLAccInfo(void);          // 잔액 조회

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct{
    int accID;                  // 계좌번호
    int balance;                // 잔   액
    char cusName[NAME_LEN];     // 고객이름
} Account;

Account accArr[100];    // Account 저장을 위한 배열
int accNum=0;           // 저장된 Account 수

int main(void){
    int choice;

    while(1)
    {
        ShowMenu();
        cout<<"선택: ";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
            case MAKE:
                MakeAccount();
                break;
            case DEPOSIT:
                DepositMoney();
                break;
            case WITHDRAW:
                WithdrawMoney();
                break;
            case INQUIRE:
                ShowALLAccInfo();
                break;
            case EXIT:
                return 0;
            default:
                cout<<"Illegal selection.."<<endl;
            
        }
    }
    return 0;
}


void ShowMenu(void)
{
    cout<<"-----Menu-----"<<endl;
    cout<<"1. 계좌개설"<<endl;
    cout<<"2. 입 금"<<endl;
}