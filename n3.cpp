#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, n;

	cin >> x;
	cout << "Во что перевести?\n---чтобы перевести в байты: введите 1---\n---килобайты: 2---\n";
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
		cout << "введите по инструкции";
	}


	return 0;
}