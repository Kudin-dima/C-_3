#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;

	cout << "¬ведите три разных числа:\n";
	cin >> a >> b >> c;

	if (a << b >> c or c << b >> a)
		cout << "среднее: " << b;
	else if (b << a >> c or c << a >> b)
		cout << "среднее: " << a;
	else
		cout << "среднее: " << c;

	return 0;
}