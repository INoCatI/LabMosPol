#include<iostream>
using namespace std;
int A, B, n, m;

int main()
{
	setlocale(LC_ALL, "rus");
	int pynkt;
	cout << "Выберите пункт лабораторной работы: \n" <<
		"1.Размер файла\n" <<
		"2.Сколько В в А\n" <<
		"3.Сколько останется от А\n" <<
		"4.Перевёртыш(двузначное число)\n" <<
		"5.Перестановка первой цифры\n";
	cin >> pynkt;

	switch (pynkt)
	{

	case 1:
		int b, k;
		cout << "Размер файла в байтах равен "; cin >> b;
		n = b % 1024;

		if (n==0)
		{
			k = b / 1024;
		}
		else
		{
			k = (b / 1024)+1;
		}

		cout << "Размер файла в килобайтах равен " << k << endl;
		break;

	case 2:
		cout << "Введите значение A и B:\n" <<
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
				cout << "В отрезке А поместиться " << n << " отрезок В" << endl;
			}
			else
			{

				if (n < 5)
				{
					cout << "В отрезке А поместиться " << n << " отрезка В" << endl;
				}
				else
				{
					cout << "В отрезке А поместиться " << n << " отрезоков В" << endl;
				}
			}
		}
		else
		{
			cout << "Отрезок В больше Отрезка А, значит поместится в нём ровно 0 раз" << endl;
		}

		break;

	case 3:
		int C;
		cout << "Введите значение A и B:\n" <<
			"A= "; cin >> A;
		cout << "B= "; cin >> B;
		C = A - B;
		while (C>B)
		{
			C -= B;
		}
		cout << "Незанятая часть отрезка А равна " << C << endl;

		break;

	case 4:
		cout << "Введите двузначное число \n"; cin >> A;

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

		cout << "Полученное число " << n << m << endl;

		break;

	case 5:
		cout << "Введите трёхзначное число "; cin >> B;

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

		cout << "Полученное число " << B << n << endl;

		break;

	default:
		cout << "Такого нет" << endl;
		return 0;
		break;
	}

}