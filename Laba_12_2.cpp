using namespace std;

#include <iostream>

int Sign(double X) {
	if (X < 0) {
		X = -1;
	}
	else if (X == 0) {
		X = 0;
	}
	else if (X > 0) {
		X = 1;
	};
	return X;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	int c;
	cout << "Введите значения А и В: ";
	cin >> A >> B;
	c = Sign(A) + Sign(B);
	cout << "Сумма Sign(A) и Sign(B) равна: " << c;
}