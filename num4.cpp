#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char a;

	cin >> a;
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		cout << "Это буква: \n" << a;
	else
		cout << "Это не буква, а символ:\n" << a;

	return 0;
}