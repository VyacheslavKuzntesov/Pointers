#pragma once
#include"stdafx.h"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(double** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(char** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRandCol(int** arr, const int rows, const int cols, int nomer_elementa, int minRand = 0, int maxRand = 100);
void FillRandCol(double** arr, const int rows, const int cols, int nomer_elementa, int minRand = 0, int maxRand = 100);
void FillRandCol(char** arr, const int rows, const int cols, int nomer_elementa, int minRand = 0, int maxRand = 100);
template <typename T>void Print(T arr[], const int n);
template <typename T>void Print(T** arr, const int rows, const int cols);


void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
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

void FillRand(double** arr, const int rows, const int cols, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}

void FillRand(char** arr, const int rows, const int cols, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand();
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

void FillRandCol(double** arr, const int rows, const int cols, int nomer_elementa, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		arr[i][nomer_elementa] = (rand() % (maxRand - minRand) + minRand) / 100;
	}
}

void FillRandCol(char** arr, const int rows, const int cols, int nomer_elementa, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		arr[i][nomer_elementa] = rand();
	}
}

template <typename T>void Print(T arr[], const int n)
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

template <typename T>void Print(T** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			//через оператор индексировани€[]
			cout << arr[i][j] << "\t";
			//»спользу€ арифметику указателей и оператор разыменовани€
			//cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}
}