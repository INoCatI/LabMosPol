#include <iostream>

using namespace std;
int A, B;
const int S = 5;


int PowerA3(int b)
{
	return b = pow(b, 3);
}

int SignX(int x)
{
	if (x < 0)
	{
		return x = -1;
	}
	if (x == 0)
	{
		return x = 0;
	}
	if (x > 0)
	{
		return x = 1;
	}
}

double RingS(int r1, int r2)
{
	const double pi = 3.14;
	return pi * (pow(r1, 2) - pow(r2, 2));
}

int Quarter(int x, int y)
{
	int c;
	if (x > 0 && y > 0)
	{
		return c = 1;
	}
	if (x > 0 && y < 0)
	{
		return c = 4;
	}
	if (x < 0 && y < 0)
	{
		return c = 3;
	}
	if (x < 0 && y>0)
	{
		return c = 2;
	}
}

int Fact2(int n)
{
	int c = 1;

	if (n % 2 > 0)
	{

		for (int i = 3; i <= n; i += 2)
		{
			c = c * i;
		}

		return c;
	}
	if (n % 2 == 0)
	{
		for (int i = 2; i <= n; i += 2)
		{
			c = c * i;
		}
		return c;
	}
}

int main()
{
	int pynkt;

	cout << "Select a task's number:\n" <<
		"1.Power\n" <<
		"2.Sign\n" <<
		"3.RingS\n" <<
		"4.Quarter\n" <<
		"5.Fact2\n" << endl; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		cout << "Enter five numbers:\n";

		for (int  i = 0; i < 5; i++)
		{
			cin >> A;

			cout << "The third degree of the number " << A << " is equal to " << PowerA3(A) << endl;
			cout << "<====================>\n";

		}

		break;

	case 2:
		int X;
		cout << "Enter X "; cin >> X;
		cout << "For X function is " << SignX(X) << endl;

		cout << "Enter two numbers A and B:\n"; cin >> A >> B;
		cout << "Functions SignX(A) + SignX(B) is equal to " << SignX(A) + SignX(B) << endl;
		break;

	case 3:
		int a[S];	
		int r1, r2;
		cout << "Enter radiuses:\n\n";
		for (int i = 0; i < 3; i++)
		{
			cout << "Big radius: "; cin >> r1;
			cout << "Small radius: "; cin >> r2;
			cout << "\n";
			cout << "Area of a ring is equel to " << RingS(r1, r2) << endl;
			cout << "<=======================>\n";

		}
			/*for (int i = 1; i <= S+1; i+=2)
		{
			cout << "Enter big radius:"; cin >> a[i - 1];
			cout << "Enter small radius:"; cin >> a[i];
			cout << "\n\n";
		}

		for (int i = 1; i <= S+1; i+=2)
		{
			cout << "Square of the ring is equal to " << RingS(a[i - 1], a[i]) << endl << endl;
		}*/

		break;

	case 4:
		int n, k;
		

		for (int  i = 0; i < 3; i++)
		{
			cout << "Enter X coordinate: "; cin >> n;
			cout << "Enter Y coordinate: "; cin >> k;
			cout << "\n";
			switch (Quarter(n, k))
			{
			case 1:
				cout << "The poin is locsted in the first coordinated qurter\n\n";
				break;

			case 2:
				cout << "The poin is locsted in the second coordinated qurter\n\n";
				break;

			case 3:
				cout << "The poin is locsted in the third coordinated qurter\n\n";
				break;

			case 4:
				cout << "The poin is locsted in the fourth coordinated qurter\n\n";
				break;
			}
		}

		
		break;

	case 5:
		int N;
		cout << "Enter a number \nN="; cin >> N;

		if (N % 2 > 0)
		{
			cout << "The number is odd, which means its factorial is " << Fact2(N) << endl;
		}
		else
		{
			cout << "The number is even, which means its factorial is " << Fact2(N) << endl;
		}

		break;

	default:
		break;
	}
}
