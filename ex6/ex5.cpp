#include <iostream> 
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double a, b, s;

    cout << "Введіть значення а:";
    cin >> a;

    cout << "Введіть значення в:";
    cin >> b;

    cout << "Введіть значення s:";
    cin >> s;

    if (s != 0 && 2 * a + 4 * s > 0) {
        double result = (34 * sin(b) + a) / (sqrt((2 * a + 4 * s) / (4 * s)) + 4 * a * b);
        cout << "Значення виразу:" << result << endl;
    }
    else {

        cout << "знаменник дорівнює нулю або менше нуля" << endl;
    }

    return 0;
}