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
	sum = pow(a, 2) + pow(b, 2);
	raz = pow(a, 2) - pow(b, 2);
	pr = pow(a, 2) * pow(b, 2);
	ch = (double)pow(a, 2) / pow(b, 2);
	cout << "����� ����� ����� " << sum << "\n" << "�������� ����� ����� " << raz << "\n" << "������������ ����� ����� " << pr << "\n" << "������� ����� ����� " << ch << "\n";
}
