#include<iostream>
using namespace std;
int n;

int main()
{
	setlocale(LC_ALL, "ru");
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
		if (m==2 && d>29)
		{
			cout << "There is no numbers greater then 29 in Februrary.";
			break;
		}
		else
		{
			if (m==2 && d==29)
			{
				cout << "Sometimes it can be The twenti ninth of Februrary.";
				break;
			}
			else
			{
				switch (d)
				{
				case 10:
					cout << "The tenth of ";
					break;

				case 11:
					cout << "The eleventh of ";
					break;

				case 12:
					cout << "The twelfth of ";
					break;

				case 13:
					cout << "The thirteenth of ";
					break;

				case 14:
					cout << "The fourteenth of ";
					break;

				case 15:
					cout << "The fifteenth of ";
					break;

				case 16:
					cout << "The sixteenth of ";
					break;

				case 17:
					cout << "The seventeenth of ";
					break;

				case 18:
					cout << "The eighteenth of ";
					break;

				case 19:
					cout << "The ninteenth of ";
					break;

				case 20:
					cout << "The twentieth of ";
					break;

				case 30:
					cout << "The thirtieth of ";
					break;

				default:
					if (d<10)
					{
						cout << "The";
						switch (d % 10)
						{
						case 1:
							cout << " first of ";
							break;

						case 2:
							cout << " second of ";
							break;

						case 3:
							cout << " third of ";
							break;

						case 4:
							cout << " fourth of ";
							break;

						case 5:
							cout << " fifth of ";
							break;

						case 6:
							cout << " sixth of ";
							break;

						case 7:
							cout << " seventh of ";
							break;

						case 8:
							cout << " eighth of ";
							break;

						case 9:
							cout << " ninth of ";
							break;
						}
						break;
					}
					else
					{
						switch (d / 10)
						{
						case 2:
							cout << "The twenty";
							break;

						case 3:
							cout << "The thirty";
							break;
						}
						switch (d % 10)
						{
						case 1:
							cout << " first of ";
							break;

						case 2:
							cout << " second of ";
							break;

						case 3:
							cout << " third of ";
							break;

						case 4:
							cout << " fourth of ";
							break;

						case 5:
							cout << " fifth of ";
							break;

						case 6:
							cout << " sixth of ";
							break;

						case 7:
							cout << " seventh of ";
							break;

						case 8:
							cout << " eighth of ";
							break;

						case 9:
							cout << " ninth of ";
							break;
						}
						break;
					}
				}

				switch (m)
				{
				case 1:
					cout << " January.";
					break;

				case 2:
					cout << " Februrary.";
					break;

				case 3:
					cout << " March.";
					break;

				case 4:
					cout << " April.";
					break;

				case 5:
					cout << " May.";
					break;

				case 6:
					cout << " June.";
					break;

				case 7:
					cout << " July.";
					break;

				case 8:
					cout << " Augst.";
					break;

				case 9:
					cout << " September.";
					break;

				case 10:
					cout << " October.";
					break;

				case 11:
					cout << " November.";
					break;

				case 12:
					cout << " December.";
					break;
				}
				break;
			}
		}
		

	case 2:
		char a;
		cout << "Robot can move in four directions:\nS--South\nN--North\nW--West\nE--East\n\n" <<
			"It has three comands:\n0--keep going;\n1--turn to the left;\n-1--turn to the right;\n";
		cout << "Set the initial direction: "; cin >> a;
		switch (a)
		{
		case 'S':
			cout << "Robot is moving to the South now.\n";
			break;
		case 'N':
			cout << "Robot is movin to the North now.\n";
			break;
		case 'W':
			cout << "Robot is moving to the West now.\n";
			break;
		case 'E':
			cout << "Robot is moving to the East now.\n";
			break;
		default:
			break;
		}
		cout << "Choose one of the commands: "; cin >> n;
				
		switch (a)
		{
		case 'S':
			switch (n)
			{
			case 0:
				cout << "The Robot is still moving to the South\n\n";
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
				cout << "The Robot is still moving to the North\n\n";
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
				cout << "The Robot is still moving to the West\n\n";
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
				cout << "The Robot is still moving to the East\n\n";
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
		int k;
		cout << "Enter a number between 10 and 40: "; cin >> k;
		switch (k)
		{
		case 10:
			cout << "ten ";
			break;

		case 11:
			cout << "eleven ";
			break;

		case 12:
			cout << "twelve ";
			break;

		case 13:
			cout << "thirteen ";
			break;

		case 14:
			cout << "fourteen ";
			break;

		case 15:
			cout << "fifteen ";
			break;

		case 16:
			cout << "sixteen ";
			break;

		case 17:
			cout << "seventeen ";
			break;

		case 18:
			cout << "eighteen ";
			break;

		case 19:
			cout << "ninteen ";
			break;

		case 20:
			cout << "twenty ";
			break;

		case 30:
			cout << "thirty ";
			break;
			
		case 40:
			cout << "fourty ";
			break;
		default:
			switch (k/10)
			{
			case 2:
				cout << "twenty ";
				break;
			case 3:
				cout << "thirty ";
				break;
			}
			switch (k%10)
			{
			case 1:
				cout << "one ";
				break;
			case 2:
				cout << "two ";
				break;
			case 3:
				cout << "three ";
				break;
			case 4:
				cout << "four ";
				break;
			case 5:
				cout << "five ";
				break;
			case 6:
				cout << "six ";
				break;
			case 7:
				cout << "seven ";
				break;
			case 8:
				cout << "eight ";
				break;
			case 9:
				cout << "nine ";
				break;
			}
			break;
		}
		cout << "tasks."<<endl;
		break;

	case 4:
		int l;
		cout << "Enter a number between 100 and 999: "; cin >> l;
		switch (l/100)
		{
		case 1:
			cout << "one hundred ";
			break;
		case 2:
			cout << "two hundred ";
			break;
		case 3:
			cout << "three hundred ";
			break;
		case 4:
			cout << "four hundred ";
			break;
		case 5:
			cout << "five hundred ";
			break;
		case 6:
			cout << "six hundred ";
			break;
		case 7:
			cout << "seven hundred ";
			break;
		case 8:
			cout << "eight hundred ";
			break;
		case 9:
			cout << "nine hundred ";
			break;
		}
		switch (l/10%10)
		{
		case 0:
			cout << "";
			break;
		case 2:
			cout << "twenty ";
			break;
		case 3:
			cout << "thirty ";
			break;
		case 4:
			cout << "fourty ";
			break;
		case 5:
			cout << "fifty ";
			break;
		case 6:
			cout << "sixty ";
			break;
		case 7:
			cout << "seventy ";
			break;
		case 8:
			cout << "eighty ";
			break;
		case 9:
			cout << "ninty ";
			break;
		}
		switch (l%100)
		{
		case 10:
			cout << "ten";
			break;
		case 11:
			cout << "eleven";
			break;
		case 12:
			cout << "twelve";
			break;
		case 13:
			cout << "thirteen";
			break;
		case 14:
			cout << "fourteen";
			break;
		case 15:
			cout << "fifteen";
			break;
		case 16:
			cout << "sixteen";
			break;
		case 17:
			cout << "seventeen";
			break;
		case 18:
			cout << "eighteen";
			break;
		case 19:
			cout << "nineteen";
			break;
		default:
			switch (l%10)
			{
			case 0:
				cout << "";
				break;
			case 1:
				cout << "one";
				break;
			case 2:
				cout << "two";
				break;
			case 3:
				cout << "three";
				break;
			case 4:
				cout << "four";
				break;
			case 5:
				cout << "five";
				break;
			case 6:
				cout << "six";
				break;
			case 7:
				cout << "seven";
				break;
			case 8:
				cout << "eight";
				break;
			case 9:
				cout << "nine";
				break;
			}
			break;
		}
		break;

	case 5:
		int y;
		cout << "Enter a year: "; cin >> y;
		cout << y << " is the year of ";
		y -= 3;
		switch (y%60/12)
		{
		case 0:
			cout << "green";
			break;
		case 1:
			cout << "red";
			break;
		case 2:
			cout << "yellow";
				break;
		case 3:
			cout << "white";
			break;
		case 4:
			cout << "black";
			break;
		}
		switch (y%12)
		{
		case 0:
			cout << " hohla";
			break;
		case 1:
			cout << " rat";
			break;
		case 2:
			cout << " cow";
			break;
		case 3:
			cout << " tiger";
			break;
		case 4:
			cout << " hare";
			break;
		case 5:
			cout << " dragon";
			break;
		case 6:
			cout << " snake";
			break;
		case 7:
			cout << " horse";
			break;
		case 8:
			cout << " sheep";
			break;
		case 9:
			cout << " monkey";
			break;
		case 10:
			cout << " chiken";
			break;
		case 11:
			cout << " dog";
			break;
		}
		break;
		
		
	}
}
