#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "������� ������ � ��������:\n";
	cin >> a >> b;

	if ((a == b) && (a % 2 == 1))
		cout << "��� ��������: " << b << "\t" << a;
	else if (a % 2 == 1)
		cout << "��������: " << a;
	else if ((a == b) && (a % 2 != 1))
		cout << " ";
	else
		cout << "��������: " << b;
	return 0;
}