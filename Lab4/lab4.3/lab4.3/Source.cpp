#include<iostream>

using namespace std;
int a, b;

int main()
{
	setlocale(LC_ALL, "rus");
	double ar;
	cout << "Введиет два числа\n ";
	cin >> a >> b;
	ar = (double)(a + b) / 2;
	cout << "Среднее арифметические чисел " << a << " и " << b << " равно " << ar << "\n";
}
