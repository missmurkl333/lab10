#include <iostream>

#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double a;

    cout << "Значення а в градусах: ";
    cin >> a;

    double radians = a * 3.14 / 180.0;

    double z1 = 1 - 0.25 * pow(sin(2 * radians), 2) + 3 * cos(radians);
    double z2 = pow(cos(radians), 2) + pow(cos(radians), 4);

    cout << "z1 = " << z1 << endl;

    cout << "z2 = " << z2 << endl;

    return 0;
}