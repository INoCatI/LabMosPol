#include<iostream>
using namespace std;
int p;
int A, B, C, nc;
int x, y, n, m = 10, a;


int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Выберите пункт \n" <<
		"1.Поменять местами А и В\n" <<
		"2.Поменять местами А,В и С (вар 1)\n" <<
		"3.Поменять мкстами А,В и С (вар 2)\n" <<
		"4.Значение функции: y=3x^6-6x^2-7\n" <<
		"5.Значение функции: y=4(x-3)^6-7(x-3)^3+2\n" <<
		"6.Вовести числа а в восьмую степень\n" <<
		"7.Возвести число а в пятнадцатую степень\n";
	cin >> p;

	switch (p)
	{

	case 1:
		cout << "Введите значение А и В "; cin >> A >> B;
		nc = A;
		A = B;
		B = nc;
		cout << "В переменной А хранится: " << A << "\n" << "В переменной B хранится: " << B << endl;
		break;

	case 2: //A--B	B--C	C--A
		cout << "Введите значение А,В и C "; cin >> A >> B >> C;
		nc = A;
		A = B;
		B = C;
		C = nc;
		cout << "В переменной А хранится: " << A << "\n" << "В переменной B хранится: " << B << "\n" << "В переменной C хранится: " << C << endl;
		break;

	case 3: //A--C	C--B	B--A
		cout << "Введите значение А,В и C "; cin >> A >> B >> C;
		nc = A;
		A = C;
		C = B;
		B = nc;
		cout << "В переменной А хранится: " << A << "\n" << "В переменной B хранится: " << B << "\n" << "В переменной C хранится: " << C << endl;
		break;

	case 4:
		cout << "Введите значение переменной x "; cin >> x;
		y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
		cout << "Значние функции y=3x^6-6x^2-7 при x=" << x << " равно " << y << "\n";
		break;

	case 5:
		cout << "Введите значение переменной x "; cin >> x;
		y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
		cout << "Значние функции y=4(x-3)^6-7(x-3)^3+2 при x=" << x << " равно " << y << "\n";
		break;

	case 6:
		cout << "Введите число a "; cin >> a;

		n = a;
		a = pow(a, 5);
		a *= n;
		a *= n;
		a *= n;
		cout << a;
		break;

	case 7:
		cout << "Введите значение a "; cin >> a;

		n = a;
		a = pow(a, m);
		a = a * n * n * n * n * n;
		cout << a;
		break;

	default:
		break;
	}

}
