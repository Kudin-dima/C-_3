#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "������� ������ ����� :";
	cin >> a;
	cout << "������� ������ �����:";
	cin >> b;
	cout << "������� ������ �����:";
	cin >> c;
	if (b < a && c < a)
		cout << "���������� �����: " << a;
	else if (a<b && b>c)
		cout << "���������� �����:" << b;
	else 
		cout << "���������� ����� :" << c;
	return 0;
}