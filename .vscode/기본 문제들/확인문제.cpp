#include <iostream>

using namespace std;
int main()
{
	int i, sum, num;
	sum = 0;
    num = 0;
	for(i=1 ; i<=100; i++)
	{
		sum+=i;
		if(i%3==0)
			num+=i;
	}
	cout << "1~ 100 사이의 정수합은" << sum << "이고" << endl;
	cout << "3의 배수의 합은" << num << "입니다." << endl;
	return 0;
}

