#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    int a, b, c;
    cout << "������� �������:";
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "����������� �� ����������";
    else if (a != b && a != c && b != c)
        cout << "��������������";
    else if (a == b && b == c)
        cout << "��������������";
    else
        cout << "��������������";

    return 0;
}