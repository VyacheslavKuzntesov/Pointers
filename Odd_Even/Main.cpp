#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int	Even_count(int arr[], const int n);
int Odd_count(int arr[], const int n);
int* getEven(int arr[], const int n);
int* getOdd(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};

	FillRand(arr, n);
	Print(arr, n);

	cout << "количество   четных: " << Even_count(arr, n) << endl;
	cout << "количество нечетных: " << Odd_count(arr, n) << endl;

	int* arr_even = getEven(arr, n);
	int* arr_odd = getOdd(arr, n);

	cout << "Массив   четных чисел: "; 
	Print(arr_even, Even_count(arr, n));

	cout << "Массив нечетных чисел: ";
	Print(arr_odd, Odd_count(arr, n));

	delete[] arr_even;
	delete[] arr_odd;
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Even_count(int arr[], const int n)
{
	int even_count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_count++;
	}
	return even_count;
}

int Odd_count(int arr[], const int n)
{
	return n - Even_count(arr,n);
}

int* getEven(int arr[], const int n)
{
	int* even_arr = new int[Even_count(arr, n)]{};
	for (int i = 0, j = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_arr[j++] = arr[i];
	}
	return even_arr;
}

int* getOdd(int arr[], const int n)
{
	int* odd_arr = new int[Odd_count(arr, n)]{};
	for (int i = 0, j = 0; i < n; i++)
	{
		if (arr[i] % 2)odd_arr[j++] = arr[i];
	}
	return odd_arr;
}