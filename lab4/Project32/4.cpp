#include<iostream>
using namespace std;
int a, b, sum, raz, pr, programma;
double ch;
double const pi = 3.14;



int main()
{
	setlocale(LC_ALL, "rus");
	int S, P;
	cout << "�������� ����� ������ \n" <<
		"1.\n" <<
		"2.\n" <<
		"3.\n" <<
		"4.\n" <<
		"5.\n" << endl;
	cin >> programma;


	switch (programma)
	{
	case 1:
		cout << "������� �����: ";
		cin >> a;
		cout << "������� ������ : ";
		cin >> b;
		S = a * b;
		P = 2 * (a + b);
		cout << "������� �������������� " << S << "\n" << "�������� �������������� " << P << "\n";
		break;

	case 2:
		int d;
		double L;
		cout << "������� ������� ����������: ";
		cin >> d;
		L = pi * d;
		cout << "������ ���������� ����� " << L << "\n";
		break;

	case 3:
		double ar;
		cout << "������� ��� �����\n ";
		cin >> a >> b;
		ar = (double)(a + b) / 2;
		cout << "������� �������������� ����� " << a << " � " << b << " ����� " << ar << "\n";
		break;

	case 4:
		cout << "�������� ��� ����� \n";
		cin >> a >> b;
		sum = pow(a, 2) + pow(b, 2);
		raz = pow(a, 2) - pow(b, 2);
		pr = pow(a, 2) * pow(b, 2);
		ch = (double)pow(a, 2) / pow(b, 2);
		if (b == 0)
		{
			cout << "����� ������� ����� " << sum << "\n" << "�������� ������� ����� " << raz << "\n" << "������������ ������� ����� " << pr << "\n" << "������� �� ���� ������������" << "\n";
		}
		else
		{
			cout << "����� ������� ����� " << sum << "\n" << "�������� ������� ����� " << raz << "\n" << "������������ ������� ����� " << pr << "\n" << "������� ������� ����� " << ch << "\n";
		}
		break;

	case 5:
		cout << "������� ��� ����� \n";
		cin >> a >> b;
		sum = abs(a) + abs(b);
		raz = abs(a) - abs(b);
		pr = abs(a) * abs(b);
		ch = (double)abs(a) / abs(b);
		if (b == 0)
		{
			cout << "����� ������� ����� " << sum << "\n" << "�������� ������� ����� " << raz << "\n" << "������������ ������� ����� " << pr << "\n" << "������� �� ���� ������������" << "\n";
		}
		else
		{
			cout << "����� ������� ����� " << sum << "\n" << "�������� ������� ����� " << raz << "\n" << "������������ ������� ����� " << pr << "\n" << "������� ������� ����� " << ch << "\n";
		}
		break;

	default:

		break;

	}
}