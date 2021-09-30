#include<iostream>
using namespace std;
char A = 'A', B = 'B', C = 'C', n; //A--C	C--B	B--A

int main()
{
	setlocale(LC_ALL, "rus");
	n = A;
	A = B;
	B = C;
	C = n;
	cout << "В переменной А хранится: " << A << "\n" << "В переменной B хранится: " << B << "\n" << "В переменной C хранится: " << C << endl;
}