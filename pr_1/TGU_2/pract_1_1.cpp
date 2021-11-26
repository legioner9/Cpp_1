//

#include <iostream>

#include <cmath>

using namespace std;

int main()

{

    setlocale(LC_ALL, "RUS");

    float x, b, a, y;

    // const float e = 2.71828;

    cout << "Введите x: ";

    cin >> x;

    cout << "Введите b: ";

    cin >> b;

    cout << "Введите a: ";

    cin >> a;

    // y = log(b) * (a + 1 / sin(x)) - (1 / pow(e, -b));

    y = (a + b) * pow(a, b + 1) + tan(x);

    cout << y << endl;

    return 0;
}