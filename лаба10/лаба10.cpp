#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Ukrainian");
	const double pi = 3.14;
	double radius, height, cost;

	cout << "Радіус бака: ";
	cin >> radius;

	cout << "Висота бака: ";
	cin >> height;

	cout << "Введіть вартість одного літра пального: ";
	cin >> cost;

	double volume = pi * pow(radius, 2) * height;
	double allcost = volume * cost * 1000;

	cout << "06'єм бака: " << volume * 1000 << " літрів" << endl;
	cout << "Вартість пальноro: " << allcost << " гривень" << endl;

	return 0;
}