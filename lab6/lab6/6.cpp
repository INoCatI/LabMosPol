#include<iostream>
using namespace std;
int x1, x2, y, y2, x3, y3, a, b;
double d, d1, d2, D, P, S;



int main()
{
	int p;
	setlocale(LC_ALL, "rus");

	cout << "\33[1;31m Выберите пункт \033[0m\n" <<
		"\33[1;32m 1. Расстояние между двумя точками \033[0m\n" <<
		"\33[1;33m 2. Найти длину отрезков АС и ВС и их сумму \033[0m\n" <<
		"\33[1;34m 3. Произведение отрезков АС и ВС \033[0m\n" <<
		"\33[1;35m 4. Площадь и периметр прямоугольника \033[0m\n" <<
		"\33[1;36m 5. Площадь и периметр треугольника \033[0m\n";
	cin >> p;

	switch (p)
	{
	case 1:
		cout << "\33[1;37m Введите координаты первой точки \033[0m\n";
		cin >> x1 >> y;
		cout << "Введите координаты второй точки \n";
		cin >> x2 >> y2;
		d = sqrt(pow(x1 - x2, 2) + pow(y - y2, 2));
		cout << "Расстояние между точками равно " << d;
		break;

	case 2:
		cout << "Введите координату точки A:\n";
		cin >> x1;
		cout << "Введите координату точки B:\n";
		cin >> x2;
		cout << "Введите координату точки C:\n";
		cin >> x3;
		d1 = abs(x1 - x3);
		d2 = abs(x2-x3);
		D = d2 + d1;
		cout << "Расстояние между тчоками A и C равно " << d1 << "\n";
		cout << "Расстояние между тчоками B и C равно " << d2 << "\n";
		cout << "Сумма длин отрезков AC и BC равно " << D << "\n";
		break;

	case 3:
		cout << "Введите координату точки A:\n";
		cin >> x1;
		cout << "Введите координату точки B:\n";
		cin >> x2;
		cout << "Введите координату точки C:\n";
		cin >> x3;

		if ((x1>x3 & x2 < x3 ) || (x2>x3 & x1 < x3))
		{
			d1 = abs(x1 - x3);
			d2 = abs(x2 - x3);
			cout << "Произведение отрезков АС и ВС равно " << d1 * d2 << endl;
		}
		else
		{
			cout << "Координата точки С не соответствует условию, что точка С лежут между А и В" << endl;
		}

		break;

	case 4:
		cout << "Введите координаты точки 1 :\n";
		cin >> x1 >> y;
		cout << "Введите координаты точки 2 :\n";
		cin >> x2 >> y2;
		cout << "Длина прямоугольнка равна " << abs(x2 - x1) << "\n";
		cout << "Ширина прямоугольника равна " << abs(y - y2) << "\n";
		cout << "Периметр прямоугольника равен " << 2 * (abs(x2 - x1) + abs(y - y2)) << "\n";
		cout << "Площадь прямоугольника равна " << abs(x2 - x1) * abs(y - y2) << "\n";
		break;

	case 5:
		cout << "Введите координаты точки A:\n";
		cin >> x1 >> y;
		cout << "Введите координаты точки B :\n";
		cin >> x2 >> y2;
		cout << "Введите координаты точки C :\n";
		cin >> x3 >> y3;
		d= sqrt(pow(x1 - x2, 2) + pow(y - y2, 2));
		d1 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
		d2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y, 2));
		P = d + d1 + d2;
		S = sqrt(P / 2 * (P / 2 - d) * (P / 2 - d1) * (P / 2 - d2));
		cout << "Периметр треугольника равен " << P << "\n";
		cout << "Площадь треугольника равна " << S << "\n";
		break;

	default:
		
		break;
	}

}
