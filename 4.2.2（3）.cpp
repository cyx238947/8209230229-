/*(3)�������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬
��̬���Թ۲�ָ�뼰ָ��ָ������ݣ����һ��������������С��������
����������ָ�뷽ʽ�������Ԫ�أ�
����ͷ������ڴ棨delete����*/
#include<iostream>
using namespace std;
void M(int a[], int size);
int main()
{
	cout << "������Ԫ�ظ���: ";
	int size;
	cin >> size;

	int* a = new int[size];

	cout << "����������Ԫ��:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	M(a, size);
	for (int i = 0; i < size; i++)
	{
		cout << *(a + i) << " ";
	}
	delete[]a;
	return 0;
}
void M(int a[],int size)
{
	for (int i = 0;i<size;i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t;
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
		
}