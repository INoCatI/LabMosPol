#include<iostream>

using namespace std;
int xA=2, yA=-5, xB=-4, yB=-3, xC=-1, yC=-4;

int main()
{
	setlocale(LC_ALL, "rus");
	cout<<"Расстояние между точками A и C равно "<<sqrt(pow(xA - xC, 2) + pow(yA - yC, 2))<<"\n";
	cout << "Расстояние между точками B и C равно " << sqrt(pow(xB - xC, 2) + pow(yB - yC, 2))<<"\n";
	cout << "Их произведение равно " << sqrt(pow(xA - xC, 2) + pow(yA - yC, 2)) * sqrt(pow(xB - xC, 2) + pow(yB - yC, 2)) << "\n";
}
