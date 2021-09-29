
#include<iostream>

using namespace std;
int x1, y, x2, y2;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Введите координаты точки 1 :\n";
	cin >> x1 >> y;
	cout << "Введите координаты точки 2 :\n";
	cin >> x2 >> y2;

	cout << "Длина прямоугольнка равна " << abs(x2 - x1) << "\n";
	cout << "Ширина прямоугольника равна " << abs(y - y2) << "\n";

	cout << "Периметр прямоугольника равен " << 2 * (abs(x2 - x1) + abs(y - y2)) << "\n";

	cout << "Площадь прямоугольника равна " << abs(x2 - x1) * abs(y - y2) << "\n";

}
