#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "������һ���ַ�";
	cin >> a;
	if (a >= 97 && a <= 122)
		cout << char(a - 32) << endl;
	else
		cout << char(a + 1);

	return 0;
}