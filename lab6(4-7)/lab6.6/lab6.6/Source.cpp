#include<iostream>
using namespace std;
int A;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите число А "; cin >> A;

	n = A;
	A = pow(A, 5);
	A *= n;
	A *= n;
	A *= n;
	cout << A;
}