#include<iostream>
using namespace std;
int A(int &refx,int &refy)
{
	int i;
	for (i = (refx < refy ? refx : refy);i>0; i--)
	{
		if (refx % i == 0 && refy % i == 0)
			break;
	}
			return i;
}
int main()
{
	int m,n;
	cout << "������������Ȼ��" << endl;
	cin >> m >> n;
	cout << "���Լ��Ϊ" << A(m, n) << endl;
	cout << "��С������Ϊ" << m * n / A(m, n) << endl;
	return 0;
}