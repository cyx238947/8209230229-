#include<iostream>
using namespace std;
double celsius_to_fah(double cel);
double fahrenheit_to_cels(double fah);
int main()
{

	double a, b;
	cout << "�����������¶�" << endl;
	cin >> a;
	b = celsius_to_fah(a);
	cout << "��Ӧ�Ļ����¶�Ϊ" << b << "�H" << endl;


	double x, y;
	cout << "�����뻪���¶�" << endl;
	cin >> x;
	y = celsius_to_fah(x);
	cout << "��Ӧ�������¶�Ϊ" << y << "�H" << endl;
	return 0;
}