/*��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10��������
�����������в��ԡ�����ԭ�� int parseHex(const char *const
hexString);
�磺���ú��� parseHex(��A5��);����165*/
#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
    int sum = 0;
    int len= strlen(hexString);
    for (int i = 0; i < len; i++)
    {
        char currentChar = hexString[i];
        int m;
        if (currentChar >= '0' && currentChar <= '9')
        {
            m = currentChar - '0';
        }
        else if (currentChar >= 'A' && currentChar <= 'F')
        {
            m = currentChar - 'A' + 10;
        }
        else if (currentChar >= 'a' && currentChar <= 'f') 
        {
            m = currentChar - 'a' + 10;
        }
        sum = sum *16 + m;
    }
    return sum;
}
int main() 
{
    const int maxLen = 100;
    char hexString[maxLen];
    cout << "������һ���ַ���: ";
    cin.getline(hexString, maxLen);
        int result = parseHex(hexString);
    cout <<  result << endl;

        return 0;
}

