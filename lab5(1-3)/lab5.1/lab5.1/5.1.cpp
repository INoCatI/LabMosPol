#include<iostream>

using namespace std;
int x1, y, x2, Y;

int main()
{
	setlocale(LC_ALL, "rus");
	double d;
	cout << "Введите координаты первой точки:\n";
	cin >> x1 >> y;
	cout << "Введите координаты второй точки:\n";
	cin >> x2 >> Y;
	d = sqrt(pow(x1 - x2, 2) + pow(y - Y, 2));
	cout << "Расстояние между тчоками равно " << d;
}
