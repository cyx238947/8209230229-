#include<iostream>
using namespace std;
int main()
{
	int a, b, n, i;
	cout << "������������" << endl;
	cin >> a >> b;
	if (a > 0 && b > 0)
	{

		for (i = (a <= b ? a : b); i > 1; i--)
		{
			if (a % i == 0 && b % i == 0)
				break;
		}
		for (n = (a >= b ? a : b); n < a * b; n++)
		{
			if (n % a == 0 && n % b == 0)
				break;
		}
	}
	else
		cout << "��������������������" << endl;
	 
	cout << a << "��" << b << "�����Լ��Ϊ" << i << endl;
	cout << a << "��" << b << "��" << "��С������Ϊ" << n << endl;
	system("pause");
	return 0;
}