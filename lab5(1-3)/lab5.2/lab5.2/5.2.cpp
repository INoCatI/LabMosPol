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
	d1 = sqrt(pow(x1 - x3, 2) + pow(y - y3, 2));
	d2 = sqrt(pow(x2 - x3, 2) + pow(Y - y3, 2));
	D = d2 + d1;
	cout << "���������� ����� ������� A � C ����� " << d1 << "\n";
	cout << "���������� ����� ������� B � C ����� " << d2 << "\n";
	cout << "����� �������� AC � BC ����� " << D << "\n";
}
