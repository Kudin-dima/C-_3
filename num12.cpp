#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    int a, b, c;
    cout << "Введите отрезки:";
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "Треугольник не существует";
    else if (a != b && a != c && b != c)
        cout << "Разносторонний";
    else if (a == b && b == c)
        cout << "Равносторонний";
    else
        cout << "Равнобедренный";

    return 0;
}