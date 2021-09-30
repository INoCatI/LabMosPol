#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	cout << "Введите значение переменной x "; cin >> x;
	y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;
	cout << "Значние функции y=4(x-3)^6-7(x-3)^3+2 при x=" << x << " равно " << y << "\n";
}