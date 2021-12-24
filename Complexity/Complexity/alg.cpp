#include<iostream>
#include<chrono>
#include<ctime>
using namespace std;
using chrono::high_resolution_clock;
using chrono::duration;

void put(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 20;
	}
}

void output(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}



void bubbles(int *arr,int n)
{
	auto t1 = high_resolution_clock::now();
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}

		}

	}
	auto t2 = high_resolution_clock::now();

	cout << "Колличество элементов массива: " << n << endl;
	cout << "Время затраченное на выполнение алгоритма составляет: " << endl;
	if (n<=1000)
	{
		duration<double, std::milli> ms_double = t2 - t1;
		cout << ms_double.count() << " миллисекунд\n";
	}
	else
	{
		chrono::duration<float> duration = t2 - t1;
		cout << duration.count() <<" секунд\n";
	}
	cout << "<=====================>" << endl;
}

void brush(int* arr, int n)
{
	auto t1 = high_resolution_clock::now();
	double const k = 1.247;
	for (int step = n - 1; step >= 1; step /= k)
	{
		for (int i = 0; i < n - step; i++)
		{
			if (arr[i] > arr[i + step]) {
				swap(arr[i], arr[i + step]);
			}
		}

	}
	auto t2 = high_resolution_clock::now();

	cout << "Колличество элементов массива: " << n << endl;
	cout << "Время затраченное на выполнение алгоритма составляет: " << endl;
	if (n <= 1000)
	{
		duration<double, std::milli> ms_double = t2 - t1;
		cout << ms_double.count() << " миллисекунд\n";
	}
	else
	{
		chrono::duration<float> duration = t2 - t1;
		cout << duration.count() << " секунд\n";
	}
	cout << "<=====================>" << endl;
}

void insert(int *arr,int n)
{
	auto t1 = high_resolution_clock::now();
	int j;
	for (int i = 1; i < n; i++) {
		int x = arr[i];
		j = i;
		while (j > 0 && x < arr[j - 1]) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = x;
	}
	auto t2 = high_resolution_clock::now();

	cout << "Колличество элементов массива: " << n << endl;
	cout << "Время затраченное на выполнение алгоритма составляет: " << endl;
	if (n <= 1000)
	{
		duration<double, std::milli> ms_double = t2 - t1;
		cout << ms_double.count() << " миллисекунд\n";
	}
	else
	{
		chrono::duration<float> duration = t2 - t1;
		cout << duration.count() << " секунд\n";
	}
	cout << "<=====================>" << endl;
}

void Shell(int* arr, int n)
{
	auto t1 = high_resolution_clock::now();
	int j;
	for (int s = n / 2; s > 0; s /= 2)
	{
		for (int i = s; i < n; i++)
		{
			int x = arr[i];
			for (j = i; j >= s; j -= s)
			{
				if (x < arr[j - s])
				{
					arr[j] = arr[j - s];
				}
				else
				{
					break;
				}
			}
			arr[j] = x;
		}
	}
	auto t2 = high_resolution_clock::now();

	cout << "Колличество элементов массива: " << n << endl;
	cout << "Время затраченное на выполнение алгоритма составляет: " << endl;
	if (n <= 1000)
	{
		duration<double, std::milli> ms_double = t2 - t1;
		cout << ms_double.count() << " миллисекунд\n";
	}
	else
	{
		chrono::duration<float> duration = t2 - t1;
		cout << duration.count() << " секунд\n";
	}
	cout << "<=====================>" << endl;
}

void choice(int* arr, int n)
{
	auto t1 = high_resolution_clock::now();
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		swap(arr[i], arr[min]);
	}
	auto t2 = high_resolution_clock::now();

	cout << "Колличество элементов массива: " << n << endl;
	cout << "Время затраченное на выполнение алгоритма составляет: " << endl;
	if (n <= 1000)
	{
		duration<double, std::milli> ms_double = t2 - t1;
		cout << ms_double.count() << " миллисекунд\n";
	}
	else
	{
		chrono::duration<float> duration = t2 - t1;
		cout << duration.count() << " секунд\n";
	}
	cout << "<=====================>" << endl;
}

void dwarf(int* arr, int n)
{
	auto t1 = high_resolution_clock::now();
	int j = 2;
	for (int i = 1; i < n; i--)
	{
		if (arr[i - 1] > arr[i])
		{
			swap(arr[i - 1], arr[i]);
		}
		if (i > 0)
		{
			continue;
		}
		i = j++;

	}
	auto t2 = high_resolution_clock::now();

	cout << "Колличество элементов массива: " << n << endl;
	cout << "Время затраченное на выполнение алгоритма составляет: " << endl;
	if (n <= 1000)
	{
		duration<double, std::milli> ms_double = t2 - t1;
		cout << ms_double.count() << " миллисекунд\n";
	}
	else
	{
		chrono::duration<float> duration = t2 - t1;
		cout << duration.count() << " секунд\n";
	}
	cout << "<=====================>" << endl;
}



void quick(int* arr,int first, int last,int n)
{
	int b = first;
	int e = last;
	int piv = (b + e) / 2;
	while (b <= e)
	{
		while (arr[b] < arr[piv])
			b++;
		while (arr[e] > arr[piv])
			e--;

		if (b <= e)
		{
			swap(arr[b], arr[e]);
			b++;
			e--;
		}
	}

	if (e > first)
	{
		quick(arr, first, e,n);
	}
	if (b < last)
	{
		quick(arr, b, last,n);
	}
		
}

int main()
{
	int c=1000000;
	srand(time(nullptr));
	setlocale(LC_ALL, "ru");
	int n;

	cout << "\tСортировка «пузырёк»:" << endl;

	for (int i = 10; i <= c; i*=10)
	{
		n = i;
		int* arr = new int[n];
		put(arr, n);
		bubbles(arr, n);
		
		delete[] arr;
	}
	cout << "\t\t######################\n";

	cout << "\tСортировка «расчёстка»:" << endl;
	for (int i = 10; i <= c; i *= 10)
	{
		n = i;
		int* arr = new int[n];
		put(arr, n);
		brush(arr, n);

		delete[] arr;
	}
	cout << "\t\t######################\n";

	cout << "\tСортировка «вставками»:" << endl;
	for (int i = 10; i <= c; i *= 10)
	{
		n = i;
		int* arr = new int[n];
		put(arr, n);
		insert(arr, n);

		delete[] arr;
	}
	cout << "\t\t######################\n";

	cout << "\tСортировка «шелла»:" << endl;
	for (int i = 10; i <=c; i *= 10)
	{
		n = i;
		int* arr = new int[n];
		put(arr, n);
		Shell(arr, n);

		delete[] arr;
	}
	cout << "\t\t######################\n";

	cout << "\tСортировка «выбором»:" << endl;
	for (int i = 10; i <= c; i *= 10)
	{
		n = i;
		int* arr = new int[n];
		put(arr, n);
		choice(arr, n);

		delete[] arr;
	}
	cout << "\t\t######################\n";

	cout << "\tСортировка «гномья»:" << endl;
	for (int i = 10; i <= c; i *= 10)
	{
		n = i;
		int* arr = new int[n];
		put(arr, n);
		dwarf(arr, n);

		delete[] arr;
	}
	cout << "\t\t######################\n";

	cout << "\tСортировка «быстрая»:" << endl;
	for (int i = 10; i <= c; i *= 10)
	{
		n = i;
		int* arr = new int[n];
		put(arr, n);
		auto t1 = high_resolution_clock::now();
		quick(arr, 0, n - 1, n);
		auto t2 = high_resolution_clock::now();

		delete[] arr;

		cout << "Колличество элементов массива: " << n << endl;
		cout << "Время затраченное на выполнение алгоритма составляет: " << endl;
		if (n <= 1000)
		{
			duration<double, std::milli> ms_double = t2 - t1;
			cout << ms_double.count() << " миллисекунд\n";
		}
		else
		{
			chrono::duration<float> duration = t2 - t1;
			cout << duration.count() << " секунд\n";
		}
		cout << "<=====================>" << endl;
	}
}