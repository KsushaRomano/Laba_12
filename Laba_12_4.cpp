using namespace std;

#include <iostream>

int Quarter(double x, double y) {
	int p;
	if ((x > 0) & (y > 0)) {
		p = 1;
	}
	else if ((x < 0) & (y > 0)) {
		p = 2;
	}
	else if ((x < 0) & (y < 0)) {
		p = 3;
	}
	else if ((x > 0) & (y < 0)) {
		p = 4;
	};
	return p;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	double x, y;
	for (i = 1; i <= 3; i++) {
		cout << "Введите координаты точки: ";
		cin >> x >> y;
		cout << "Точка находится в " << Quarter(x, y) << " четверти" << endl;
	}
}