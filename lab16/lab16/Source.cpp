#include <iostream>

using namespace std;

void printArr(int* array, int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] <<endl;
}

void putArr(int* array, int n)
{
	cout << "Feel free to put in values of the array:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
}


int main()
{
	int pynkt, n;
	cout << "Select a number of a task:\n" <<
		"1.Array output.\n" <<
		"2.Geometric progresstion.\n" <<
		"3.Array, A and B.\n" <<
		"4.Reverse array output.\n" <<
		"5.Odd and even.\n"; cin >> pynkt;
	cout << "\n\n";

	switch (pynkt)
	{
	case 1:
	{
		cout << "Enter a number N:"; cin >> n;
		int* a = new int[n];
		int x = 1;

		for (int i = 0; i < n; i++)
		{
			a[i] = x;
			x += 2;
		}

		printArr(a, n);

		delete[] a;
	}
		break;

	case 2:
	{
		int A, D;
		cout << "Enter a number N (N>1):"; cin >> n;
		cout << "Enter the first member of geometric progression A:"; cin >> A;
		cout << "Enter the denominator of the geometric progression D:"; cin >> D;
		int* a = new int[n];
		a[0] = A;

		for (int i = 1; i < n; i++)
		{
			a[i] = A * pow(D, i);
		}

		printArr(a, n);

		delete[] a;

	}
		break;

	case 3:
	{
		int A, B;
		cout << "Enter a number N (N>2):"; cin >> n;
		cout << "Enter numbers A and B:\nA:"; cin >> A;
		cout << "B:"; cin >> B;
		int* a = new int[n];

		a[0] = A;
		a[1] = B;

		for (int i = 2; i < n; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
		}

		printArr(a, n);
		delete[] a;
	}
		break;

	case 4:
	{
		cout << "Enter the size of the array:"; cin >> n;
		int* arr = new int[n];
		putArr(arr, n);
		cout << "\nArray output:" << endl;
		int l = 0, r = n - 1;
		while (l<=r)
		{
			cout << arr[l]<<endl;
			if (l == r)
				break;
			cout << arr[r] << endl;
			l++;
			r--;
		}

		delete[] arr;
	}
		break;

	case 5:
	{
		cout << "Enter the size of the array:"; cin >> n;
		int* arr = new int[n];
		putArr(arr, n);
		cout << "\nArray output:" << endl;
		for (int i = 1; i < n; i+=2)
		{
			cout << arr[i] << endl;
		}

		for (int i = n-1; i >= 0; i-=2)
		{
			cout << arr[i] << endl;
		}
		
		delete[] arr;
	}
		break;
	}


}