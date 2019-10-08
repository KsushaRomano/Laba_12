using namespace std;
#define _USE_MATH_DEFINES

#include <iostream>

double RingS(double S1, double S2) {
	double S;
	S = M_PI * S1 * S1 - M_PI * S2 * S2;
	return S;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	double S1, S2;
	for (i = 1; i <= 3; i++) {
		cout << "Введите внешний и внутренний диаметры: ";
		cin >> S1 >> S2;
		cout << "Площадь кольца равна: " << RingS(S1, S2) << endl;
	};
}