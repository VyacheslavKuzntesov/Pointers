#include"stdafx.h"
#include"Memory.h"

int** allocate(const int rows, const int cols)
{
	int** arr = new int* [rows] {};
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols] {};
	}
	return arr;
}

void clear(int** arr, const int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int* push_back(int arr[], int& n)
{
	int* buffer = new int[n + 1]{};
	int value;
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	cout << "¬ведите добавл€емое значение в конец: "; cin >> value;
	buffer[n] = value;
	n++;
	return buffer;
}

int** push_row_back(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows + 1]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	buffer[rows] = new int[cols] {};
	rows++;
	return buffer;
}

void push_col_back(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

int* push_front(int arr[], int& n)
{
	int* buffer = new int[n + 1]{};
	int value;
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	cout << "¬ведите добавл€емое значение в начало: "; cin >> value;
	buffer[0] = value;
	delete[] arr;
	n++;
	return buffer;
}

int** push_row_front(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows + 1]{};
	for (int i = 1; i < rows + 1; i++)
	{
		buffer[i] = arr[i - 1];
	}
	delete[] arr;
	buffer[0] = new int[cols] {};
	rows++;
	return buffer;
}

void push_col_front(int** arr, const int rows, int& cols)
{

	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols + 1]{};
		for (int j = 0, k = 1; j < cols; j++, k++)buffer[k] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

int* insert(int arr[], int& n)
{
	int* buffer = new int[n + 1]{};
	int value;
	int index;
	int h = 0;
	cout << "¬ведите добавл€емое значение: "; cin >> value;
	cout << "¬ведите индекс: "; cin >> index;
	for (int i = 0; i < n; i++, h++)
	{
		if (i == index - 1)
		{
			buffer[h] = value;
			h++;
		}
		buffer[h] = arr[i];
	}
	delete[] arr;
	n++;
	return buffer;
}

int** insert_row(int** arr, int& rows, const int cols, const int index)
{
	int** buffer = new int* [rows + 1]{};
	for (int i = 0, j = 0; i < rows + 1; i++, j++)
	{
		buffer[j] = (j == (index - 1) ? (i--, new int[cols] {}) : arr[i]);
	}
	delete[] arr;
	rows++;
	return buffer;
}

int** insert_col(int** arr, const int rows, int& cols, const int index)
{
	int** buffer = new int* [rows] {};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = new int[cols + 1]{};
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0, k = 0; j < cols; j++, k++)
		{
			buffer[i][(k == (index - 1) ? ++k : k)] = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	cols++;
	return buffer;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}
	cout << "”даление последнего элемента: " << endl;
	delete[] arr;
	n--;
	return buffer;
}

int** pop_row_back(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [--rows]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr[rows];
	delete[] arr;
	return buffer;
}

void pop_col_back(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols - 1];
		for (int j = 0; j < cols - 1; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}

int* pop_front(int arr[], int& n)
{
	int* buffer = new int[n - 1]{};
	for (int i = 1; i < n; i++)
	{
		buffer[i - 1] = arr[i];
	}
	cout << "”даление нулевого элемента: " << endl;
	delete[] arr;
	n--;
	return buffer;
}

int** pop_row_front(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows - 1]{};
	for (int i = 1, j = 0; i < rows; i++, j++)
	{
		buffer[j] = arr[i];
	}
	delete[] arr[0];
	delete[] arr;
	rows--;
	return buffer;
}

void pop_col_front(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols - 1];
		for (int j = 0, k = 1; j < cols - 1; j++, k++)buffer[j] = arr[i][k];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}

int* erase(int arr[], int& n)
{
	int* buffer = new int[n - 1]{};
	int index;
	int h = 0;
	cout << "¬ведите индекс удал€емого значени€ : "; cin >> index;
	for (int i = 0; i < n; i++, h++)
	{
		if (i == index - 1)i++;
		buffer[h] = arr[i];
	}
	delete[] arr;
	n--;
	return buffer;
}

int** erase_row(int** arr, int& rows, const int cols, const int index)
{
	int** buffer = new int* [rows - 1]{};
	for (int i = 0, j = 0; i < rows; i++, j++)
	{
		buffer[j] = arr[(i == (index - 1) ? ++i : i)];
	}
	delete[] arr[index - 1];
	delete[] arr;
	rows--;
	return buffer;
}

void erase_col(int** arr, const int rows, int& cols, const int index)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols - 1];
		for (int j = 0, k = 0; j < cols - 1; j++, k++)(j == index - 1) ? buffer[j] = arr[i][++k] : buffer[j] = arr[i][k];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}