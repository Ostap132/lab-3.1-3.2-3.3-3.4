#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    // Обчислення функціонально сталої частини
    A = fabs(4 * x - 1);

    // Спосіб 1: розгалуження в скороченій формі
    if (x < 0)
        B = pow(x, 7) - 2 * x;
    if (x >= 0 && x < 3)
        B = atan((exp(x) + 1.0) / 8.0);
    if (x >= 3)
        B = pow(x, 4) + exp(x * x + 3);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // Спосіб 2: розгалуження в повній формі
    if (x < 0)
        B = pow(x, 7) - 2 * x;
    else
    {
        if (x >= 3)
            B = pow(x, 4) + exp(x * x + 3);
        else
            B = atan((exp(x) + 1.0) / 8.0);
    }

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}