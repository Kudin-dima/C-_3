#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x;
	cout << "������� ������� ��������:";
	cin >> x;

	if (x < 7)
		cout << "����������";
	else if (x < 18)
		cout << "������";
	else if (x < 60)
		cout << "�������";
	else
		cout << "���������";

	return 0;
}