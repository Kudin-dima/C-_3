#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    float x, y, r, h;

    cout << "���������� �����: ";
    cin >> x >> y;
    cout << "������ �����: ";
    cin >> r;

    h = sqrt(x * x + y * y);
    cout << "���������� ����� " << h;

    if (h > r)
        cout << "����� �� ����������� �����.\n";
    else
        cout << "\n����� ����������� �����.\n";

    return 0;
}