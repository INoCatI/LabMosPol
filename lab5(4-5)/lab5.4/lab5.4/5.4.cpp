
#include<iostream>

using namespace std;
int x1, y, x2, y2;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "������� ���������� ����� 1 :\n";
	cin >> x1 >> y;
	cout << "������� ���������� ����� 2 :\n";
	cin >> x2 >> y2;

	cout << "����� ������������� ����� " << abs(x2 - x1) << "\n";
	cout << "������ �������������� ����� " << abs(y - y2) << "\n";

	cout << "�������� �������������� ����� " << 2 * (abs(x2 - x1) + abs(y - y2)) << "\n";

	cout << "������� �������������� ����� " << abs(x2 - x1) * abs(y - y2) << "\n";

}
