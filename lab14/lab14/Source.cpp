#include<iostream>
using namespace std;
int pynkt, a, b, n, k, s, i;
double s1 = 1000, s2 = 1000, x;

int main()
{
	cout << "Choose an item:\n" <<
		"1.Two nambers\n" <<
		"2.Two numeric lines\n" <<
		"3.N and K\n" <<
		"4.Bank deposit\n" <<
		"5.Greatest common divisior\n" <<
		"6.Fibonaacci number\n"; cin >> pynkt;
	switch (pynkt)
	{
	case 1:
		cout << "Enter a="; cin >> a;
		cout << "Enter b="; cin >> b;
		for (int i = a; i <= b; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << i;
			}
		}
		break;

	case 2:
		cout << "Enter a="; cin >> a;
		cout << "Enter b="; cin >> b;
		n = 0;
		if (b>a/2)
		{
			cout << "Length of the unoccupant part of A is " << a - b << endl;
		}
		else {
			while (n < a)
			{
				n += b;
			}
			if (n==a)
			{
				cout << "Length of the unoccupant part of A is " << 0 << endl;
			}
			else {
				n -= b;
				cout << "Length of the unoccupant part of A is " << a-n << endl;
			}
		}
		break;

	case 3:
		cout << "Enter a number: "; cin >> n;
		s = 0;
		for (i = 1; n>=s;i)
		{
			s += i;
			i += 2;
		}
		cout << "K=" << i-2<<endl;
		cout << "Sum=" << s << endl;
		break;

	case 4:
		int p;
		i = 1;
		cout << "Enter a procentage: \n"; cin >> p;
		x = 1 + 0.01*p;
		for (s1, i; s2 < 1100; i++)
		{
			s2 = s1 * pow(x, i);
		}
		cout << "After " << i - 1 << " months, the deposit amount will be " << s2 << endl;
		break;

	case 5:
		cout << "Enter two numbers:\n" <<
			"A="; cin >> a;
		cout << "B="; cin >> b;
		while (a!=b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else 
			{
				b = b - a;
			}
		}
		cout << "The greatest common divisor is " << a << endl;
		break;

	default:
		break;
	}
}