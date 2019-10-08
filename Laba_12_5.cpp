using namespace std;

#include <iostream>

double Fact2(int N) {
	int i;
	double Nf;
	Nf = 1;
	if ((N % 10 == 0) || (N % 10 == 2) || (N % 10 == 4) || (N % 10 == 6) || (N % 10 == 8)) {
		for (i = 2; i <= N; i += 2) {
			Nf = Nf * i;
		};
	}
	else {
		for (i = 1; i <= N; i += 2) {
			Nf = Nf * i;
		};
	};
	return Nf;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double N;
	cout << "Введите значение N: ";
	cin >> N;
	cout << "Двойной факториал числа N равен: " << Fact2(N);
}