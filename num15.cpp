#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int staj, yo;
	cout << "������� ���� ���� ������: ";
	cin >> staj;
	cout << "������� ��� ���: ";
	cin >> yo;

	if (staj >= 20 && yo <= 42)
		cout << "�� �������";
	else
		cout << "�� �� �������";
	return 0;
}
