#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int S, a, b, P;
	cout << "Введите длину: ";
	cin >> a;
	cout << "Введите ширину: ";
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Площадь равна " << S << "\n" << "Периметр равен " << P << "\n";
}
