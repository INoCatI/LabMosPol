#include<iostream>
using namespace std;
char A = 'A', B = 'B', n;

int main()
{
	setlocale(LC_ALL, "rus");
	n = A;
	A = B;
	B = n;
	cout << "� ���������� � ��������: " << A << "\n" << "� ���������� B ��������: " << B << endl;
}