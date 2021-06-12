#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int staj, yo;
	cout << "Введите свой стаж работы: ";
	cin >> staj;
	cout << "Сколько вам лет: ";
	cin >> yo;

	if (staj >= 20 && yo <= 42)
		cout << "Вы приняты";
	else
		cout << "Вы не приняты";
	return 0;
}
