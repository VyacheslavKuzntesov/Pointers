#include"Memory.h"

template <typename T>T** allocate(const int rows, const int cols)
{
	T** arr = new T * [rows] {};
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols]{};
	}
	return arr;
}

template <typename T>void clear(T** arr, const int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

template <typename T>T* push_back(T arr[], int& n)
{
	T* buffer = new T[n + 1]{};
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

template <typename T>T** push_row_back(T** arr, int& rows, const int cols)
{
	T** buffer = new T * [rows + 1]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	buffer[rows] = new T[cols]{};
	rows++;
	return buffer;
}

template <typename T>void push_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

template <typename T>T* push_front(int arr[], int& n)
{
	T* buffer = new T[n + 1]{};
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

template <typename T>T** push_row_front(T** arr, int& rows, const int cols)
{
	T** buffer = new T * [rows + 1]{};
	for (int i = 1; i < rows + 1; i++)
	{
		buffer[i] = arr[i - 1];
	}
	delete[] arr;
	buffer[0] = new T[cols]{};
	rows++;
	return buffer;
}

template <typename T>void push_col_front(T** arr, const int rows, int& cols)
{

	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0, k = 1; j < cols; j++, k++)buffer[k] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

template <typename T>T* insert(T arr[], int& n)
{
	T* buffer = new T[n + 1]{};
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

template <typename T>T** insert_row(T** arr, int& rows, const int cols, const int index)
{
	T** buffer = new T * [rows + 1]{};
	for (int i = 0, j = 0; i < rows + 1; i++, j++)
	{
		buffer[j] = (j == (index - 1) ? (i--, new T[cols]{}) : arr[i]);
	}
	delete[] arr;
	rows++;
	return buffer;
}

template <typename T>T** insert_col(T** arr, const int rows, int& cols, const int index)
{
	T** buffer = new T * [rows] {};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = new T[cols + 1]{};
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

template <typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[n - 1]{};
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}
	cout << "”даление последнего элемента: " << endl;
	delete[] arr;
	n--;
	return buffer;
}

template <typename T>T** pop_row_back(T** arr, int& rows, const int cols)
{
	T** buffer = new T * [--rows]{};
	for (int i = 0; i < rows; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr[rows];
	delete[] arr;
	return buffer;
}

template <typename T>void pop_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1];
		for (int j = 0; j < cols - 1; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}

template <typename T>T* pop_front(T arr[], int& n)
{
	T* buffer = new T[n - 1]{};
	for (int i = 1; i < n; i++)
	{
		buffer[i - 1] = arr[i];
	}
	cout << "”даление нулевого элемента: " << endl;
	delete[] arr;
	n--;
	return buffer;
}

template <typename T>T** pop_row_front(T** arr, int& rows, const int cols)
{
	T** buffer = new T * [rows - 1]{};
	for (int i = 1, j = 0; i < rows; i++, j++)
	{
		buffer[j] = arr[i];
	}
	delete[] arr[0];
	delete[] arr;
	rows--;
	return buffer;
}

template <typename T>void pop_col_front(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1];
		for (int j = 0, k = 1; j < cols - 1; j++, k++)buffer[j] = arr[i][k];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}

template <typename T>T* erase(T arr[], int& n)
{
	T* buffer = new T[n - 1]{};
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

template <typename T>T** erase_row(int** arr, int& rows, const int cols, const int index)
{
	T** buffer = new T * [rows - 1]{};
	for (int i = 0, j = 0; i < rows; i++, j++)
	{
		buffer[j] = arr[(i == (index - 1) ? ++i : i)];
	}
	delete[] arr[index - 1];
	delete[] arr;
	rows--;
	return buffer;
}

template <typename T>void erase_col(T** arr, const int rows, int& cols, const int index)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols - 1];
		for (int j = 0, k = 0; j < cols - 1; j++, k++)(j == index - 1) ? buffer[j] = arr[i][++k] : buffer[j] = arr[i][k];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols--;
}