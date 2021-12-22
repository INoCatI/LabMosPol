#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void randarr(int* arr, int n)
{
	arr[0] = rand() % 20;
	for (int i = 1; i < n; i++)
	{
		arr[i] = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
				arr[i] = rand() % 20; 
			else
			{
				continue;
			}
		}
		
	}
	cout << "Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}

void putarr(int* arr, int n)
{
	cout << "Enter the array values:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void Random(int pynkt)
{
	int n;
	switch (pynkt)
	{
	case 1:
	{
		int k, l;
		cout << "Enter numbers K and L (L>K):" << endl; cin >> k >> l;
		cout << "Enter the size of the array (N>L):"; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		int b=0;
		for (int i = k; i <= l; i++)
		{
			b = arr[i] + b;
		}
		cout << "\nArithmetic mean is " <<(double) b / (l - k+1) << endl;
		delete[] arr;
		break;
	}

	case 2:
	{
		cout << "Enter the size of the array "; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		int d = arr[0] - arr[1];
		for (int i = 2; i < n; i++)
		{
			if (arr[i]-arr[i-1]!=d)
			{
				d=0;
				break;
			}
			else
			{
				d = arr[i] - arr[i - 1];
			}
		}
		cout << endl;
		if (d==0)
		{
			cout << 0 << "\nThese numbers don't form an arithmetic progression" << endl;
		}
		else {
			cout << "Differents of arithmetic progression is " << d << endl;
		}
		delete[] arr;
		break;
	}
	case 3:
	{
		cout << "Enter the size of the array "; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		int min = arr[0];
		for (int i = 2; i < n; i+=2)
		{
			if (arr[i]<min)
				min = arr[i];
		}
		cout << "The smallest element with even number is " << min << endl;
		delete[] arr;
		break;
	}

	case 4:
	{
		cout << "Enter the size of the array "; cin >> n;
		int* arr = new int[n];
		randarr(arr, n);
		for (int i = n; i > 1; i--)
		{
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			{
				cout << "The local maximum: " << arr[i] << endl;
				cout << "It's number: " << i + 1 << "\t(if we start from 0, then its number is " << i << ")" << endl;
				break;
			}
			else
			{
				continue;
			}
		}
		delete[] arr;
		break;
	}

	case 5:
	{
		cout << "Enter the size of the array "; cin >> n;
		int* arr = new int[n];
		int c=0;
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 15;
			cout << arr[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j] == arr[i])
				{
					c++;
					cout << "Two identical elements have a value: " << arr[i] << endl;
					cout << "Their numbers is " << j + 1 << " and " << i + 1 << " (But if we start from 0? their numbers well be " << j << " and " << i << ")" << endl;
					break;
				}
			}
		}
		if (c==0)
		{
			cout << "There are no identical numbers in the array." << endl;
		}
		delete[] arr;
		break;
	}

	}

}

void Hands(int pynkt)
{
	int n;
	switch (pynkt)
	{
	case 1:
	{
		int k, l;
		cout << "Enter numbers K and L (L>K):" << endl; cin >> k >> l;
		cout << "Enter the size of the array (N>L):"; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		int b = 0;
		for (int i = k; i <= l; i++)
		{
			b = arr[i] + b;
		}
		cout << "\nArithmetic mean is " << (double)b / (l - k + 1) << endl;
		delete[] arr;
		break;
	}

	case 2:
	{
		cout << "Enter the size of the array "; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		int d = arr[1] - arr[0];
		for (int i = 2; i < n; i++)
		{
			if (arr[i] - arr[i - 1] != d)
			{
				d = 0;
				break;
			}
			else
			{
				d = arr[i] - arr[i - 1];
			}
		}
		cout << endl;
		if (d == 0)
		{
			cout << 0 << "\nThese numbers don't form an arithmetic progression " << endl;
		}
		else {
			cout << "Differents of arithmetic progression is " << d << endl;
		}
		break;
	}

	case 3:
	{
		cout << "Enter the size of the array "; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		int min = arr[0];
		for (int i = 2; i < n; i += 2)
		{
			if (arr[i] < min)
				min = arr[i];
		}
		cout << "The smallest element with even number is " << min << endl;
		delete[] arr;
		break;
	}

	case 4:
	{
		cout << "Enter the size of the array "; cin >> n;
		int* arr = new int[n];
		putarr(arr, n);
		for (int i = n; i > 1; i--)
		{
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			{
				cout << "The local maximum: " << arr[i] << endl;
				cout << "It's number: " << i + 1 << "\t(if we start from 0, then its number is " << i << ")" << endl;
				break;
			}
			else
			{
				continue;
			}
		}
		delete[] arr;
		break;
	}

	case 5:
	{
		cout << "Enter the size of the array "; cin >> n;
		int* arr = new int[n];
		int c = 0;
		putarr(arr, n);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j]==arr[i])
				{
					cout << "Two identical elements have a value: " << arr[i] << endl;
					cout << "Their numbers is " << j + 1 << " and " << i + 1 << " (But if we start from 0? their numbers well be " << j << " and " << i << ")" << endl;
					break;
				}
				
			}
		}
		if (c == 0)
		{
			cout << "There are no identical numbers in the array." << endl;
		}
		delete[] arr;
		break;
	}
	}
}

int main()
{
	srand(time(nullptr));
	string c;
	int pynkt;
	cout << "Chose the number of the item:\n" <<
		"1.Arithmetic mean(K,L)\n" <<
		"2.Different numbers and arithmetic mean\n" <<
		"3.Even nambers\n" <<
		"4.Local maximum number\n" <<
		"5.Two identical elements" << endl; cin >> pynkt;
	cout << "Select how you want the array to be filled:\nRandom\nHands" << endl; cin >> c;

	if (c == "Random")
		Random(pynkt);
	if (c == "Hands")
		Hands(pynkt);

}
