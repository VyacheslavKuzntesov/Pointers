//#include"Print.h"
#include<iostream>
using namespace std;
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