/*ƻ��ÿ�� 0.8 Ԫ����һ���� 2 ����
�ڶ��쿪ʼ��ÿ����ǰ��� 2 ����
ֱ�����ι����ƻ����������100�����ֵ����ÿ��ƽ��������Ǯ��*/
#include<iostream>
using namespace std;
int main()
{
	int x=2,day = 0;
	double y = 0.0;
	while (x <= 100)
	{	y = 0.8 * x + y;
	    x = x * 2;
		day = day + 1;
    
	}
	cout << "ƽ��ÿ�컨" << double(y)/ day << "Ԫ" << endl;
	system("pause");
	return 0;
}