#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0, space = 0, digit = 0, others = 0;
    cout<<"please input some characters\n"<<endl;
    while ((c = getchar())!='\n')
    {
        if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
            letters++;
        else if (c ==' ')
            space++;
        else if (c >= '0' && c <= '9')
            digit++;
        else
            others++;
    }
    cout << "��ĸ���У�" << letters << "��" << endl;
    cout << "�ո��У�" << space << "��" << endl;
    cout << "���ֹ��У�" << digit << "��" << endl;
    cout << "�����ַ����У�" << others << "��" << endl;
    system("pause");
        return 0;
}