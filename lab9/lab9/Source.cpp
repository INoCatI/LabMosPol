#include<iostream>
using namespace std;
int n, pro, i, ost, k;

int main()
{
	setlocale(LC_ALL, "rus");
	int pynkt;
	cout << "Выберите пункт лабораторной работы: \n" <<
		"1.Прошло N секунд, сколько с последней минуты \n" <<
		"2.Дни недели 1\n" <<
		"3.Дни недели 2\n" <<
		"4.Три целых положительных числа\n" <<
		"5.Начало столетия\n";
	cin >> pynkt;
	cout << "\n\n";

	switch (pynkt)
	{

	case 1:
		i = 0;
		cout << "Колличество пройденных секунд "; cin >> n;
		while (i<n)
		{
			i += 60;
			pro++;
		}
		ost = n - i;
		if (ost==0)
		{
			cout << "Прошло ровно " << pro << " минут";
		}
		else
		{
			ost = n - (i - 60);
			cout << "Прошло " << ost << " секунд";
		}
		break;

	case 2:
		
		cout << "Выберите число лежащее в диапозоне от 1--365 " << endl; cin >> k;
		ost = k % 7;
		switch (ost)
		{
		case 1:
			cout << "Это понедельник" << endl;
			break;
		case 2:
			cout << "Это вторник" << endl;
			break;
		case 3:
			cout << "Это среда" << endl;
			break;
		case 4:
			cout << "Это четверг" << endl;
			break;
		case 5:
			cout << "Это пятница" << endl;
			break;
		case 6:
			cout << "Это суббота" << endl;
			break;
		case 0:
			cout << "Это воскресенье" << endl;
			break;
		default:

			break;
		}
	case 3:
		cout << "Выберите число лежащее в диапозоне от 1--365 " << endl; cin >> k;
		cout << "Введите день недели, с которого начался год: \n" <<
			"1.Понедельник\n" <<
			"2.Вторник\n" <<
			"3.Среда\n" <<
			"4.Четверг\n" <<
			"5.Пятница\n" <<
			"6.Суббота\n" <<
			"7.Воскресенье\n"; cin >> n;

		switch (n)
		{
		case 1:
			ost = k % 7;
			switch (ost)
			{
			case 1:
				cout << "Это понедельник" << endl;
				break;
			case 2:
				cout << "Это вторник" << endl;
				break;
			case 3:
				cout << "Это среда" << endl;
				break;
			case 4:
				cout << "Это четверг" << endl;
				break;
			case 5:
				cout << "Это пятница" << endl;
				break;
			case 6:
				cout << "Это суббота" << endl;
				break;
			case 0:
				cout << "Это воскресенье" << endl;
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
				cout << "Это понедельник" << endl;
				break;
			case 2:
				cout << "Это вторник" << endl;
				break;
			case 3:
				cout << "Это среда" << endl;
				break;
			case 4:
				cout << "Это четверг" << endl;
				break;
			case 5:
				cout << "Это пятница" << endl;
				break;
			case 6:
				cout << "Это суббота" << endl;
				break;
			case 0:
				cout << "Это воскресенье" << endl;
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
				cout << "Это понедельник" << endl;
				break;
			case 2:
				cout << "Это вторник" << endl;
				break;
			case 3:
				cout << "Это среда" << endl;
				break;
			case 4:
				cout << "Это четверг" << endl;
				break;
			case 5:
				cout << "Это пятница" << endl;
				break;
			case 6:
				cout << "Это суббота" << endl;
				break;
			case 0:
				cout << "Это воскресенье" << endl;
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
				cout << "Это понедельник" << endl;
				break;
			case 2:
				cout << "Это вторник" << endl;
				break;
			case 3:
				cout << "Это среда" << endl;
				break;
			case 4:
				cout << "Это четверг" << endl;
				break;
			case 5:
				cout << "Это пятница" << endl;
				break;
			case 6:
				cout << "Это суббота" << endl;
				break;
			case 0:
				cout << "Это воскресенье" << endl;
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
				cout << "Это понедельник" << endl;
				break;
			case 2:
				cout << "Это вторник" << endl;
				break;
			case 3:
				cout << "Это среда" << endl;
				break;
			case 4:
				cout << "Это четверг" << endl;
				break;
			case 5:
				cout << "Это пятница" << endl;
				break;
			case 6:
				cout << "Это суббота" << endl;
				break;
			case 0:
				cout << "Это воскресенье" << endl;
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
				cout << "Это понедельник" << endl;
				break;
			case 2:
				cout << "Это вторник" << endl;
				break;
			case 3:
				cout << "Это среда" << endl;
				break;
			case 4:
				cout << "Это четверг" << endl;
				break;
			case 5:
				cout << "Это пятница" << endl;
				break;
			case 6:
				cout << "Это суббота" << endl;
				break;
			case 0:
				cout << "Это воскресенье" << endl;
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
				cout << "Это понедельник" << endl;
				break;
			case 2:
				cout << "Это вторник" << endl;
				break;
			case 3:
				cout << "Это среда" << endl;
				break;
			case 4:
				cout << "Это четверг" << endl;
				break;
			case 5:
				cout << "Это пятница" << endl;
				break;
			case 6:
				cout << "Это суббота" << endl;
				break;
			case 0:
				cout << "Это воскресенье" << endl;
				break;
			default:

				break;
			}

			break;
		default:
			cout << "Такого дян недели нет." << endl;
			break;
		}
	
	case 4:
		int A, B, C, S, s, a, b, c, K;
		cout << "Дан прямоугольник со сторонами: \n" <<
			"Ширина равна: \n"; cin >> A;
		cout << "Длина равна: \n"; cin >> B;
		cout << "Так же дан квадрат со стороной \n"; cin >> C;
		if (C>A || C>B)
		{
			cout << "Сторона квадрата больше одной из сторон прямоугольника, а значит ни один квадрат не поместится в данный прямоугольник." << endl;
		}
		else
		{
			n = (A / C) * (B / C);

			cout << "Максимальное колличесвто данныx квадратов размещённых в данно мпрямоугольнике равно " << n<< endl;
			break;

		}

	case 5:
		cout << "Введите год "; cin >> n;
		if (n%100<1)
		{
			cout << n/100 << " столетие." << endl;
		}
		else {
			cout << n / 100 + 1 << " столетие." << endl;
		}
		break;
	default:

		break;
	}
}