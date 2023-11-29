#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double xA = 0, yA = 0;
    double xB = 5, yB = 0, xC = -5, yC = 6;

    double a = distance(xB, yB, xC, yC);
    double b = distance(xA, yA, xC, yC);
    double c = distance(xA, yA, xB, yB);

    double xD = (xB + xC) / 2;
    double yD = (yB + yC) / 2;

    double median = distance(xD, yD, xA, yA);

    double alpha = acos((b * b + c * c - a * a) / (2 * b * c));
    double bisec = 2 * b * c * sin(alpha / 2) / (b + c);

    cout << "Довжина медіани: " << median << endl;
    cout << "Довжина бісектриси: " << bisec << endl;

    return 0;
}