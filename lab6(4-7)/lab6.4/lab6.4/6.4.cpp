#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	cout << "Введите значение переменной x "; cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "Значние функции y=3x^6-6x^2-7 при x=" << x << " равно " << y << "\n";
}