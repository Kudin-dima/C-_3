#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите первое число :";
	cin >> a;
	cout << "Введите второе число:";
	cin >> b;
	cout << "Ввдеите третье число:";
	cin >> c;
	if (b < a && c < a)
		cout << "Наибольшее число: " << a;
	else if (a<b && b>c)
		cout << "Наибольшее число:" << b;
	else 
		cout << "Наибольшее число :" << c;
	return 0;
}