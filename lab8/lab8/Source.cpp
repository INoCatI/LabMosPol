#include<iostream>
using namespace std;
int A, B, n, m;

int main()
{
	setlocale(LC_ALL, "rus");
	int pynkt;
	cout << "�������� ����� ������������ ������: \n" <<
		"1.������ �����\n" <<
		"2.������� � � �\n" <<
		"3.������� ��������� �� �\n" <<
		"4.���������(���������� �����)\n" <<
		"5.������������ ������ �����\n";
	cin >> pynkt;

	switch (pynkt)
	{

	case 1:
		int b, k;
		cout << "������ ����� � ������ ����� "; cin >> b;
		n = b % 1024;

		if (n==0)
		{
			k = b / 1024;
		}
		else
		{
			k = (b / 1024)+1;
		}

		cout << "������ ����� � ���������� ����� " << k << endl;
		break;

	case 2:
		cout << "������� �������� A � B:\n" <<
			"A= "; cin >> A;
		cout << "B= "; cin >> B;
		m = B;

		if (A >= B)
		{
			while (A >= B)
			{
				B += m;
				n++;
			}
			
			if (n == 1)
			{
				cout << "� ������� � ����������� " << n << " ������� �" << endl;
			}
			else
			{

				if (n < 5)
				{
					cout << "� ������� � ����������� " << n << " ������� �" << endl;
				}
				else
				{
					cout << "� ������� � ����������� " << n << " ��������� �" << endl;
				}
			}
		}
		else
		{
			cout << "������� � ������ ������� �, ������ ���������� � �� ����� 0 ���" << endl;
		}

		break;

	case 3:
		int C;
		cout << "������� �������� A � B:\n" <<
			"A= "; cin >> A;
		cout << "B= "; cin >> B;
		C = A - B;
		while (C>B)
		{
			C -= B;
		}
		cout << "��������� ����� ������� � ����� " << C << endl;

		break;

	case 4:
		cout << "������� ���������� ����� \n"; cin >> A;

		if (A > 0)
		{
			n = A % 10;
			m = A / 10;
		}
		else
		{
			n = A % 10;
			m = -A / 10;
		}

		cout << "���������� ����� " << n << m << endl;

		break;

	case 5:
		cout << "������� ���������� ����� "; cin >> B;

		if (A > 0)
		{
			n = B / 100;
			B = B % 100;
		}
		else
		{
			n = B / 100;
			B = B % 100;
		}

		cout << "���������� ����� " << B << n << endl;

		break;

	default:
		cout << "������ ���" << endl;
		return 0;
		break;
	}

}