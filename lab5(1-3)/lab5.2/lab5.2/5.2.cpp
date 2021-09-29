#include<iostream>

using namespace std;
int x1, y, x2, Y, x3, y3;

int main()
{
	setlocale(LC_ALL, "rus");
	double d1, d2, D;
	cout << "Введите координаты точки A:\n";
	cin >> x1 >> y;
	cout << "Введите координаты точки B :\n";
	cin >> x2 >> Y;
	cout << "Введите координаты точки C :\n";
	cin >> x3 >> y3;
	d1 = sqrt(pow(x1 - x3, 2) + pow(y - y3, 2));
	d2 = sqrt(pow(x2 - x3, 2) + pow(Y - y3, 2));
	D = d2 + d1;
	cout << "Расстояние между тчоками A и C равно " << d1 << "\n";
	cout << "Расстояние между точками B и C равно " << d2 << "\n";
	cout << "Сумма отрезков AC и BC равно " << D << "\n";
}
