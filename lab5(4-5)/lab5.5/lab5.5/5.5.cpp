#include<iostream>

using namespace std;
int x1, y, x2, Y, x3, y3;

int main()
{
	setlocale(LC_ALL, "rus");
	double d1, d2, D;
	cout << "������� ���������� ����� A:\n";
	cin >> x1 >> y;
	cout << "������� ���������� ����� B :\n";
	cin >> x2 >> Y;
	cout << "������� ���������� ����� C :\n";
	cin >> x3 >> y3;
	cout << "�������� ������������ ����� " << sqrt(pow(x1 - x2, 2) + pow(y - Y, 2)) + sqrt(pow(x2 - x3, 2) + pow(Y - y3, 2)) + sqrt(pow(x3 - x1, 2) + pow(y3 - y, 2)) << "\n";
}