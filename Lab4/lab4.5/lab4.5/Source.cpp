#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum, raz, pr;
	double ch;
	cout << "������� ��� ����� \n";
	cin >> a >> b;
	sum = abs(a) + abs(b);
	raz = abs(a) - abs(b);
	pr = abs(a) * abs(b);
	ch = (double)abs(a) / abs(b);
	cout << "����� ����� ����� " << sum << "\n" << "�������� ����� ����� " << raz << "\n" << "������������ ����� ����� " << pr << "\n" << "������� ����� ����� " << ch << "\n";
}
