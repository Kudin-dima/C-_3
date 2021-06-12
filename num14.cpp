#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x;
	cout << "Введите возраст человека:";
	cin >> x;

	if (x < 7)
		cout << "дошкольник";
	else if (x < 18)
		cout << "ученик";
	else if (x < 60)
		cout << "рабочий";
	else
		cout << "пенсионер";

	return 0;
}