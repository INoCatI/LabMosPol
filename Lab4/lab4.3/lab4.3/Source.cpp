#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	double ar;
	cout << "������� ��� �����\n ";
	cin >> a >> b;
	ar = (double)(a + b) / 2;
	cout << "������� �������������� ����� " << a << " � " << b << " ����� " << ar << "\n";
}
