#include<iostream>
using namespace std;
int x1, x2, y, y2, x3, y3, a, b;
double d, d1, d2, D, P, S;
int xA = 2, yA = -5, xB = -4, yB = -3, xC = -1, yC = -4;



int main()
{
	int p;
	setlocale(LC_ALL,"rus");

	cout << "\33[1;31m �������� ����� \033[0m\n" <<
		"\33[1;32m 1. ���������� ����� ����� ������� \033[0m\n" <<
		"\33[1;33m 2. ���������� ����� ����� ������� \033[0m\n" <<
		"\33[1;34m 3. ���������� ����� ����� ������� \033[0m\n" <<
		"\33[1;35m 4. ���������� ����� ����� ������� \033[0m\n" <<
		"\33[1;36m 5. ���������� ����� ����� ������� \033[0m\n";
	cin >> p;

	switch (p)
	{
	case 1:
		cout << "\33[1;37m ������� ���������� ������ ����� \033[0m\n";
		cin >> x1 >> y;
		cout << "������� ���������� ������ ����� \n";
		cin >> x2 >> y2;
		d = sqrt(pow(x1 - x2, 2) + pow(y - y2, 2));
		cout << "���������� ����� ������� ����� " << d;
		break;

	case 2:
		cout << "������� ���������� ����� A:\n";
		cin >> x1 >> y;
		cout << "������� ���������� ����� B:\n";
		cin >> x2 >> y2;
		cout << "������� ���������� ����� C:\n";
		cin >> x3 >> y3;
		d1 = sqrt(pow(x1 - x3, 2) + pow(y - y3, 2));
		d2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
		D = d2 + d1;
		cout << "���������� ����� ������� A � C ����� " << d1 << "\n";
		cout << "���������� ����� ������� B � C ����� " << d2 << "\n";
		cout << "����� ���� �������� AC � BC ����� " << D << "\n";
		break;

	case 3:
		cout << "���������� ����� ������� A � C ����� " << sqrt(pow(xA - xC, 2) + pow(yA - yC, 2)) << "\n";
		cout << "���������� ����� ������� B � C ����� " << sqrt(pow(xB - xC, 2) + pow(yB - yC, 2)) << "\n";
		cout << "�� ������������ ����� " << sqrt(pow(xA - xC, 2) + pow(yA - yC, 2)) * sqrt(pow(xB - xC, 2) + pow(yB - yC, 2)) << "\n";
		break;

	case 4:
		cout << "������� ���������� ����� 1 :\n";
		cin >> x1 >> y;
		cout << "������� ���������� ����� 2 :\n";
		cin >> x2 >> y2;
		cout << "����� ������������� ����� " << abs(x2 - x1) << "\n";
		cout << "������ �������������� ����� " << abs(y - y2) << "\n";
		cout << "�������� �������������� ����� " << 2 * (abs(x2 - x1) + abs(y - y2)) << "\n";
		cout << "������� �������������� ����� " << abs(x2 - x1) * abs(y - y2) << "\n";
		break;

	case 5:
		cout << "������� ���������� ����� A:\n";
		cin >> x1 >> y;
		cout << "������� ���������� ����� B :\n";
		cin >> x2 >> y2;
		cout << "������� ���������� ����� C :\n";
		cin >> x3 >> y3;
		P = sqrt(pow(x1 - x2, 2) + pow(y - y2, 2)) + sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) + sqrt(pow(x3 - x1, 2) + pow(y3 - y, 2));
		S = sqrt(P / 2 * (P - sqrt(pow(x1 - x2, 2) + pow(y - y2, 2)) * (P / 2 - sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) * (P / 2 - sqrt(pow(x3 - x1, 2) + pow(y3 - y, 2))));
		cout << "�������� ������������ ����� " << P << "\n";
		cout << "������� ������������ ����� " << S << "\n";
		break;
	default:

			break;
	}

}