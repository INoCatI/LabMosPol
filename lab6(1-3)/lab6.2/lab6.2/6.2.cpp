#include<iostream>
using namespace std;
char A = 'A', B = 'B',C='C', n; //A--B	B--C	C--A

int main()
{
	setlocale(LC_ALL, "rus");
	n = A;
	A=B;
	B = C;
	C = n;
	cout << "� ���������� � ��������: " << A << "\n" << "� ���������� B ��������: " << B << "\n" << "� ���������� C ��������: " << C << endl;
}