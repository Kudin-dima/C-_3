#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "������� ������ �����:";
	cin >> a;
	cout << "������� ������ �����:";
	cin >> b;

	if (a % b == 0)
		cout << a << "\t������� ��" << b;
	else
	{
		cout << a << "\n�� ������� ��" << b;
		cout << "\n������� " << a % b;
	}
	cout << "\n������� " << a / b;
	return 0;
}