#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Введите первое число:";
	cin >> a;
	cout << "Введите второе число:";
	cin >> b;

	if (a % b == 0)
		cout << a << "\tДелится на" << b;
	else
	{
		cout << a << "\nНе делится на" << b;
		cout << "\nОстаток " << a % b;
	}
	cout << "\nЧастное " << a / b;
	return 0;
}