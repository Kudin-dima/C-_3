#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    int x, y;
    cout << "¬ведите координаты:";
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << "I";
    else
        if (x < 0 && y>0)
            cout << "II";
        else
            if (x < 0 && y < 0)
                cout << "III";
            else
                if (x > 0 && y < 0)
                    cout << "IV";
    return 0;
}