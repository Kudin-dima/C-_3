#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char a;

	cin >> a;
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		cout << "��� �����: \n" << a;
	else
		cout << "��� �� �����, � ������:\n" << a;

	return 0;
}