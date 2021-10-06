#include<iostream>
using namespace std;
int a, b, sum, raz, pr, programma;
double ch;
double const pi = 3.14;



int main()
{
	setlocale(LC_ALL, "rus");
	int S, P;
	cout << "Выберите номер пункта \n" <<
		"1.\n" <<
		"2.\n" <<
		"3.\n" <<
		"4.\n" <<
		"5.\n" << endl;
	cin >> programma;


	switch (programma)
	{
	case 1:
		cout << "Введите длину: ";
		cin >> a;
		cout << "Введите ширину : ";
		cin >> b;
		S = a * b;
		P = 2 * (a + b);
		cout << "Площадь прямоугольника " << S << "\n" << "Периметр прямоугольника " << P << "\n";
		break;

	case 2:
		int d;
		double L;
		cout << "Введите диаметр окружности: ";
		cin >> d;
		L = pi * d;
		cout << "Длинна окружности равна " << L << "\n";
		break;

	case 3:
		double ar;
		cout << "Введите два числа\n ";
		cin >> a >> b;
		ar = (double)(a + b) / 2;
		cout << "Среднее арифметическое чисел " << a << " и " << b << " равно " << ar << "\n";
		break;

	case 4:
		cout << "Ввведите два числа \n";
		cin >> a >> b;
		sum = pow(a, 2) + pow(b, 2);
		raz = pow(a, 2) - pow(b, 2);
		pr = pow(a, 2) * pow(b, 2);
		ch = (double)pow(a, 2) / pow(b, 2);
		if (b == 0)
		{
			cout << "Сумма модулей чисел " << sum << "\n" << "Разность можулей чисел " << raz << "\n" << "Произведение модулей чисел " << pr << "\n" << "Деление на ноль невозвоможно" << "\n";
		}
		else
		{
			cout << "Сумма модулей чисел " << sum << "\n" << "Разность можулей чисел " << raz << "\n" << "Произведение модулей чисел " << pr << "\n" << "Частное модулей чисел " << ch << "\n";
		}
		break;

	case 5:
		cout << "Введите два числа \n";
		cin >> a >> b;
		sum = abs(a) + abs(b);
		raz = abs(a) - abs(b);
		pr = abs(a) * abs(b);
		ch = (double)abs(a) / abs(b);
		if (b == 0)
		{
			cout << "Сумма модулей чисел " << sum << "\n" << "Разность можулей чисел " << raz << "\n" << "Произведение модулей чисел " << pr << "\n" << "Деление на ноль невозвоможно" << "\n";
		}
		else
		{
			cout << "Сумма модулей чисел " << sum << "\n" << "Разность можулей чисел " << raz << "\n" << "Произведение модулей чисел " << pr << "\n" << "Частное модулей чисел " << ch << "\n";
		}
		break;

	default:

		break;

	}
}