#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double x = 2.1;
    double p = 2;

    double a = exp(sqrt(abs(x)));
    double b = sin(pow(p, 2)) + pow(x, 3);
    double y = pow(a, 3) / pow(b, 2);

    cout << "Значення у = F(x): " << y << endl;

    return 0;
}