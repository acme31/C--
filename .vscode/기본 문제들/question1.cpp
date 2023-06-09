#include<iostream>
using namespace std;
void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void swap(char *ptr1, char *ptr2){
    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void swap(double *ptr1, double *ptr2){
    double temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(void){
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    cout<<num1<<' '<<num2<<endl;

    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1, &ch2);
    cout<<ch1<<' '<<ch2<<endl;

    double db1=1.111, db2=5.555;
    swap(&db1, &db2);
    cout<<db1<<' '<<db2<<endl;
    return 0;
}