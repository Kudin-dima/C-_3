#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;

	cout << "������� ��� ������ �����:\n";
	cin >> a >> b >> c;

	if (a << b >> c or c << b >> a)
		cout << "�������: " << b;
	else if (b << a >> c or c << a >> b)
		cout << "�������: " << a;
	else
		cout << "�������: " << c;

	return 0;
}