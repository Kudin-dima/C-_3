#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c, d;
	cout << "������� a,b and c:";
	cin >> a >> b >> c;

	if ((pow(b, 2)) - 4 * a * c >= 0)
	{
		d = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		cout << "������: " << d << "\n";
		d = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		cout << "������: " << d;
	}

	else
	{
		cout << "d = 0";
	}


	return 0;
}