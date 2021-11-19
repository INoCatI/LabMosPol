#include<iostream>
using namespace std;

int main()
{
	int pynkt;
	cout << "Select a number of the item:\n" <<
		"1.Day and month\n" <<
		"2.Robot\n" <<
		"3.Tasks\n" <<
		"4.Description of a number from 100 to 999\n" <<
		"5.Eastern calendar.\n"; cin >> pynkt;

	switch (pynkt)
	{
	case 1:
		int d, m;
		cout << "Enter a number of a month "; cin >> m; cout << "And a number of a day "; cin >> d;

		break;

	case 2:
		int n;
		char a;
		cout << "Robot can move in four directions:\nS--South\nN--North\nW--West\nE--East\n\n" <<
			"It has three comands:\n0--keep going;\n1--turn to the left;\n-1--turn to the right;\n";
		cout << "Set the initial direction: "; cin >> a;
		cout << "Choose one of the commands: "; cin >> n;

		switch (a)
		{
		case 'S':
			switch (n)
			{
			case 0:
				cout << "The Robot is still moving the South\n\n";
				break;
			case 1:
				cout << "The Robot turned to the left, so it is moving to the East\n\n";
				break;
			case -1:
				cout << "The Robot turned to the right, so it is moving the the West\n\n";
				break;
			default:
				break;
			}
			break;
		case 'N':
			switch (n)
			{
			case 0:
				cout << "The Robot is still moving the North\n\n";
				break;
			case 1:
				cout << "The Robot turned to the left, so it is moving to the West\n\n";
				break;
			case -1:
				cout << "The Robot turned to the right, so it is moving the the East\n\n";
				break;
			default:
				break;
			}
			break;
		case 'W':
			switch (n)
			{
			case 0:
				cout << "The Robot is still moving the West\n\n";
				break;
			case 1:
				cout << "The Robot turned to the left, so it is moving to the South\n\n";
				break;
			case -1:
				cout << "The Robot turned to the right, so it is moving the the North\n\n";
				break;
			default:
				break;
			}
			break;
		case 'E':
			switch (n)
			{
			case 0:
				cout << "The Robot is still moving the East\n\n";
				break;
			case 1:
				cout << "The Robot turned to the left, so it is moving to the North\n\n";
				break;
			case -1:
				cout << "The Robot turned to the right, so it is moving the the South\n\n";
				break;
			default:
				break;
			}
			break;

		default:
			break;
		}
		break;


	case 3:



		break;


	default:
		break;
	} 
}