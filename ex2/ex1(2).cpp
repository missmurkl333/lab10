#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ukrainian");

	double cost;
	int perMonth;

	cout << "Вартість одного номера: ";
	cin >> cost;

	cout << "Кількість випусків в місяць: ";
	cin >> perMonth;

	double annualCost = cost * perMonth * 12;

	cout << "Вартість річної підписки: " << annualCost << "гривень" << endl;

	return 0;
}