#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    int y;
    cout << "������� ���:";
    cin >> y;

    if (((y % 4 != 0) || (y % 100 == 0)) && (y % 400 != 0))
        cout << "�������";
    else
        cout << "����������";

    return 0;
}