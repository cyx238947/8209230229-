/*
5�����ӳ��ң����ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ����
�ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ�����ӣ�
�ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣���*/
#include<iostream>
using namespace std;
int A(int a)
{
	int i=0;
	if (a == 1)
		i = 1;
	else
	{
		i = 2*(A(a-1)+1);
	}
	return (i);

}
int main()
{
	int days;
	cout << "����������" << endl;
	cin >> days;
	if(days>=1)
	cout <<"��һ�����ժ�����ӵ�������" << A(days) << endl;
	return 0;
}