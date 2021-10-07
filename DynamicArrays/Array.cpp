#include"stdafx.h"
#include"Array.h"

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(int** arr, const int rows, const int cols, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

void FillRandCol(int** arr, const int rows, const int cols, int nomer_elementa, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		arr[i][nomer_elementa] = rand() % (maxRand - minRand) + minRand;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//через оператор индексировани€[]
		cout << arr[i] << "\t";
		//»спользу€ арифметику указателей и оператор разыменовани€
		//cout << *(arr + i) << "\t";
	}
	cout << endl;
}

void Print(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			//через оператор индексировани€[]
			//cout << arr[i][j] << "\t";
			//»спользу€ арифметику указателей и оператор разыменовани€
			cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}
}