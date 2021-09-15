#include<iostream>
using namespace std;

void FillRand(int arr[], const int a);
void Print(int arr[], const int a);
void Evenand_Odd_Numbers(int arr[], const int a, int& b, int& c);
void Evenand_Odd_Numbers_Array(int arr[], const int a, int even[], int odd[]);

void main()
{
	setlocale(LC_ALL, "");
	int a = 0, b = 0, c = 0;
	cout << "Введите размер массива:"; cin >> a;
	int* arr = new int[a];
	FillRand(arr, a);
	cout << endl << "Исходный массив: " << endl;
	Print(arr, a);
	Evenand_Odd_Numbers(arr, a, b, c);
	int* even = new int[b];
	int* odd = new int[c];
	Evenand_Odd_Numbers_Array(arr, a, even, odd);
	cout << endl << "Массив чётных чисел(состоит из " << b << " элементов):" << endl;
	Print(even, b);
	cout << endl << "Массив нечётных чисел(состоит из " << c << " элементов):" << endl;
	Print(odd, c);
	delete[] arr;
	delete[] even;
	delete[] odd;

}

void FillRand(int arr[], const int a)
{
	for (int i = 0; i < a; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Evenand_Odd_Numbers(int arr[], const int a, int& b, int& c)
{
	for (int i = 0; i < a; i++)
	{
		if (arr[i]%2==0)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
}

void Evenand_Odd_Numbers_Array(int arr[], const int a, int even[], int odd[])
{
	int b = 0, c = 0;
	for (int i = 0; i < a; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even[b] = arr[i];
			b++;
		}
		else
		{
			odd[c] = arr[i];
			c++;
		}
	}
}