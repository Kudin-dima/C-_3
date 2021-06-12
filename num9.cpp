#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    float x, y, r, h;

    cout << "Координаты точки: ";
    cin >> x >> y;
    cout << "Радиус круга: ";
    cin >> r;

    h = sqrt(x * x + y * y);
    cout << "Гипотенуза равна " << h;

    if (h > r)
        cout << "Точка не принадлежит кругу.\n";
    else
        cout << "\nТочка принадлежит кругу.\n";

    return 0;
}