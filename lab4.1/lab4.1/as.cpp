#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int S, a, b, P;
	cout << "������� �����: ";
	cin >> a;
	cout << "������� ������: ";
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "������� ����� " << S << "\n" << "�������� ����� " << P << "\n";
}
