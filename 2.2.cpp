#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "������x" << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - x * 2;
		cout << "y��ֵΪ" << y << endl;
	}
	else if (x >= 1 && x <= 5)
	{
		y = 2 / (4 * x) + 1;
		cout << "y��ֵΪ" << y << endl;
	}
	else if (x >= 5 && x <= 10)
	{
		y = x * x;
		cout << "y��ֵΪ" << endl;
	}
	return 0;
}