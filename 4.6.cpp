/*�ַ�����ÿ����ĸ���ֵĴ�����
��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
void count(const char s[], int counts[])
counts��һ����26��Ԫ�ص��������顣const[0]��const[1]������const[25]�ֱ��¼
a��b������z���ֵĴ�������ĸ���ִ�Сд��������ĸA����ĸa��������a��
��д���Գ��򣬶����ַ���������count��������ʾ����Ĵ�����
�����ǳ����һ������������*/
#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int j = 0; j < 26; j++)
		counts[j] = 0;
	int len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			counts[s[i] - 'a']++;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			counts[s[i] - 'A']++;
		
	}
}
int main()
{
	int counts[26];
	const int maxlen = 100;
	char s[maxlen];
	cout << "Enter a string:";
	cin.getline(s, maxlen);
	count(s, counts);
	for (int i = 0; i < 26 - 1; i++)
	{
		if (counts[i] != 0)
			cout << char('a' + i) << ":" << counts[i] << " times" << endl;
	}
	return 0;
}