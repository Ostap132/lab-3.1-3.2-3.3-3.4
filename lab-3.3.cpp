#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // результат обчислення виразу

    cout << "x = ";
    cin >> x;

    // розгалуження в повній формі
    if (x <= -4)
        y = -2;
    else if (x <= 0)
        y = 0.25 * x;
    else if (x <= 2)
        y = x * x;
    else
        y = -0.5 * x + 5;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
```[cite: 12, 13]