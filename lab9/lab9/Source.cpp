#include<iostream>
using namespace std;
int n, pro, i, ost, k;

int main()
{
	setlocale(LC_ALL, "rus");
	int pynkt;
	cout << "�������� ����� ������������ ������: \n" <<
		"1.������ N ������, ������� � ��������� ������ \n" <<
		"2.��� ������ 1\n" <<
		"3.��� ������ 2\n" <<
		"4.��� ����� ������������� �����\n" <<
		"5.������ ��������\n";
	cin >> pynkt;
	cout << "\n\n";

	switch (pynkt)
	{

	case 1:
		i = 0;
		cout << "����������� ���������� ������ "; cin >> n;
		while (i<n)
		{
			i += 60;
			pro++;
		}
		ost = n - i;
		if (ost==0)
		{
			cout << "������ ����� " << pro << " �����";
		}
		else
		{
			ost = n - (i - 60);
			cout << "������ " << ost << " ������";
		}
		break;

	case 2:
		
		cout << "�������� ����� ������� � ��������� �� 1--365 " << endl; cin >> k;
		ost = k % 7;
		switch (ost)
		{
		case 1:
			cout << "��� �����������" << endl;
			break;
		case 2:
			cout << "��� �������" << endl;
			break;
		case 3:
			cout << "��� �����" << endl;
			break;
		case 4:
			cout << "��� �������" << endl;
			break;
		case 5:
			cout << "��� �������" << endl;
			break;
		case 6:
			cout << "��� �������" << endl;
			break;
		case 0:
			cout << "��� �����������" << endl;
			break;
		default:

			break;
		}
	case 3:
		cout << "�������� ����� ������� � ��������� �� 1--365 " << endl; cin >> k;
		cout << "������� ���� ������, � �������� ������� ���: \n" <<
			"1.�����������\n" <<
			"2.�������\n" <<
			"3.�����\n" <<
			"4.�������\n" <<
			"5.�������\n" <<
			"6.�������\n" <<
			"7.�����������\n"; cin >> n;

		switch (n)
		{
		case 1:
			ost = k % 7;
			switch (ost)
			{
			case 1:
				cout << "��� �����������" << endl;
				break;
			case 2:
				cout << "��� �������" << endl;
				break;
			case 3:
				cout << "��� �����" << endl;
				break;
			case 4:
				cout << "��� �������" << endl;
				break;
			case 5:
				cout << "��� �������" << endl;
				break;
			case 6:
				cout << "��� �������" << endl;
				break;
			case 0:
				cout << "��� �����������" << endl;
				break;
			default:

				break;
			}

			break;
		case 2:
			ost = (k+1) % 7;
			switch (ost)
			{
			case 1:
				cout << "��� �����������" << endl;
				break;
			case 2:
				cout << "��� �������" << endl;
				break;
			case 3:
				cout << "��� �����" << endl;
				break;
			case 4:
				cout << "��� �������" << endl;
				break;
			case 5:
				cout << "��� �������" << endl;
				break;
			case 6:
				cout << "��� �������" << endl;
				break;
			case 0:
				cout << "��� �����������" << endl;
				break;
			default:

				break;
			}

			break;
		case 3:
			ost = (k+2) % 7;
			switch (ost)
			{
			case 1:
				cout << "��� �����������" << endl;
				break;
			case 2:
				cout << "��� �������" << endl;
				break;
			case 3:
				cout << "��� �����" << endl;
				break;
			case 4:
				cout << "��� �������" << endl;
				break;
			case 5:
				cout << "��� �������" << endl;
				break;
			case 6:
				cout << "��� �������" << endl;
				break;
			case 0:
				cout << "��� �����������" << endl;
				break;
			default:

				break;
			}

			break;
		case 4:
			ost = (k+3) % 7;
			switch (ost)
			{
			case 1:
				cout << "��� �����������" << endl;
				break;
			case 2:
				cout << "��� �������" << endl;
				break;
			case 3:
				cout << "��� �����" << endl;
				break;
			case 4:
				cout << "��� �������" << endl;
				break;
			case 5:
				cout << "��� �������" << endl;
				break;
			case 6:
				cout << "��� �������" << endl;
				break;
			case 0:
				cout << "��� �����������" << endl;
				break;
			default:

				break;
			}

			break;
		case 5:
			ost = (k+4) % 7;
			switch (ost)
			{
			case 1:
				cout << "��� �����������" << endl;
				break;
			case 2:
				cout << "��� �������" << endl;
				break;
			case 3:
				cout << "��� �����" << endl;
				break;
			case 4:
				cout << "��� �������" << endl;
				break;
			case 5:
				cout << "��� �������" << endl;
				break;
			case 6:
				cout << "��� �������" << endl;
				break;
			case 0:
				cout << "��� �����������" << endl;
				break;
			default:

				break;
			}

			break;
		case 6:
			ost = (k+5) % 7;
			switch (ost)
			{
			case 1:
				cout << "��� �����������" << endl;
				break;
			case 2:
				cout << "��� �������" << endl;
				break;
			case 3:
				cout << "��� �����" << endl;
				break;
			case 4:
				cout << "��� �������" << endl;
				break;
			case 5:
				cout << "��� �������" << endl;
				break;
			case 6:
				cout << "��� �������" << endl;
				break;
			case 0:
				cout << "��� �����������" << endl;
				break;
			default:

				break;
			}

			break;
		case 7:
			ost = (k+6) % 7;
			switch (ost)
			{
			case 1:
				cout << "��� �����������" << endl;
				break;
			case 2:
				cout << "��� �������" << endl;
				break;
			case 3:
				cout << "��� �����" << endl;
				break;
			case 4:
				cout << "��� �������" << endl;
				break;
			case 5:
				cout << "��� �������" << endl;
				break;
			case 6:
				cout << "��� �������" << endl;
				break;
			case 0:
				cout << "��� �����������" << endl;
				break;
			default:

				break;
			}

			break;
		default:
			cout << "������ ��� ������ ���." << endl;
			break;
		}
	
	case 4:
		int A, B, C, S, s, a, b, c, K;
		cout << "��� ������������� �� ���������: \n" <<
			"������ �����: \n"; cin >> A;
		cout << "����� �����: \n"; cin >> B;
		cout << "��� �� ��� ������� �� �������� \n"; cin >> C;
		if (C>A || C>B)
		{
			cout << "������� �������� ������ ����� �� ������ ��������������, � ������ �� ���� ������� �� ���������� � ������ �������������." << endl;
		}
		else
		{
			n = (A / C) * (B / C);

			cout << "������������ ����������� �����x ��������� ����������� � ����� ��������������� ����� " << n<< endl;
			break;

		}

	case 5:
		cout << "������� ��� "; cin >> n;
		if (n%100<1)
		{
			cout << n/100 << " ��������." << endl;
		}
		else {
			cout << n / 100 + 1 << " ��������." << endl;
		}
		break;
	default:

		break;
	}
}