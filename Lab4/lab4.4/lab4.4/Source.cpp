#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum, raz, pr;
	double ch;
	cout << "Введите два числа \n";
	cin >> a >> b;
	sum = pow(a, 2) + pow(b, 2);
	raz = pow(a, 2) - pow(b, 2);
	pr = pow(a, 2) * pow(b, 2);
	ch = (double)pow(a, 2) / pow(b, 2);
	cout << "Сумма чисел равна " << sum << "\n" << "Разность чисел равна " << raz << "\n" << "Проивзедение чисел равно " << pr << "\n" << "Частное чисел равно " << ch << "\n";
}
