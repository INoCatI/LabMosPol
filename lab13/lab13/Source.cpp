#include<iostream>
using namespace std;
int pynkt, n,s;
double a, i;

int main()
{
	cout << "Choose an item:\n"<<
		"1.Cost of sweets\n"<<
		"2.Product of multipliers\n" <<
		"3.The square of the namber\n" <<
		"4.The amount\n" <<
		"5.Cycle\n"; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		cout << "Enter the price of 1 kilo: "; cin >> n;
		for (i = 0.1; i < 0.9 ; i+=0.1)
		{
			a = n * i;
			cout << "The price of " << i << " kilo is " << a << endl;
		}
		break;

	case 2:
		cout << "Enter a number: "; cin >> n;
		a = 1.1;
		for (i = 1.2; i <= n+0.1; i+=0.1)
		{
			a=a*i;
		}
		cout << "The product is " << a << endl;
		break;

	case 3:
		cout << "Enter a number: "; cin >> n;
		for (int j = 1; j <= 2*n-1; j+=2)
		{
			s += j;
			cout << "Sum of the nambers is " << s << endl;
		}
		cout << "\n" << "The square of " << n << " is " << s << endl;
		break;

	case 4:
		cout << "Enter a="; cin >> a;
		cout << "Enter n="; cin >> n;
		for (int j = 0; j<=n; j++)
		{
			s += pow(a, j);
		}
		cout << s;
		break;

	case 5:
		cout << "Enter a="; cin >> a;
		cout << "Enter n="; cin >> n;
		for (int j = 0; j <= n; j++)
		{
			s += pow(-a, j);
		}
		cout << s << endl;
		break;

	default:
		break;
	}
}