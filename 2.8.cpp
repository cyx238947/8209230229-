#include<iostream>
using namespace std;
int main()
{
	int a;
	double n, i;
	cout << "������һ���Ǹ���" << endl;
	cin >> a;
	{
		for (n = a, i = (n + a / n) / 2; fabs(i - n) > 1e-5; n = i, i = (n + a / n) / 2);
		
	}
		cout << a << "������ƽ����Ϊ" << i << endl;
	system("pause");
	return 0;
		

}