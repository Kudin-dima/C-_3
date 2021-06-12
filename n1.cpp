#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Введите четное и нечетное:\n";
	cin >> a >> b;

	if ((a == b) && (a % 2 == 1))
		cout << "оба нечетные: " << b << "\t" << a;
	else if (a % 2 == 1)
		cout << "нечетное: " << a;
	else if ((a == b) && (a % 2 != 1))
		cout << " ";
	else
		cout << "нечетное: " << b;
	return 0;
}