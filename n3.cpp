#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, n;

	cin >> x;
	cout << "�� ��� ���������?\n---����� ��������� � �����: ������� 1---\n---���������: 2---\n";
	cin >> n;

	switch (n)
	{
	case 1:
		cout << x * 1024;
		break;
	case 2:
		cout << x / 1024.0;
		break;
	default:
		cout << "������� �� ����������";
	}


	return 0;
}