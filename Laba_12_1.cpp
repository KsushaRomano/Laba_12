using namespace std;

#include <iostream>

void PowerA3(double A, double &B) 
{	
	B = A * A * A;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	double A, B;
	for (i = 1; i <= 5; i++) {
		cout << "Введите значение А: ";
		cin >> A;
		PowerA3(A, B);
		cout << "Значение В равно: " << B << endl;
	};
}