#include<iostream>
using namespace std;
using std::cout;
using std::cin;
//#define THEORY
//#define DZ
#define delimiter "\n------------------------------------------------\n"

template <typename T>T** allocate(const int rows, const int cols);
template <typename T>void clear(T** arr, const int rows);
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
template <typename T>T* push_back(T arr[], int& n);
template <typename T>T** push_row_back(T** arr, int& rows, const int cols);
template <typename T>void push_col_back(T** arr, const int rows, int& cols);
template <typename T>T* push_front(int arr[], int& n);
template <typename T>T** push_row_front(T** arr, int& rows, const int cols);
template <typename T>void push_col_front(T** arr, const int rows, int& cols);
template <typename T>T* insert(T arr[], int& n);
template <typename T>T** insert_row(T** arr, int& rows, const int cols, const int index);
template <typename T>T** insert_col(T** arr, const int rows, int& cols, const int index);
template <typename T>T* pop_back(T arr[], int& n);
template <typename T>T** pop_row_back(T** arr, int& rows, const int cols);
template <typename T>void pop_col_back(T** arr, const int rows, int& cols);
template <typename T>T* pop_front(T arr[], int& n);
template <typename T>T** pop_row_front(T** arr, int& rows, const int cols);
template <typename T>void pop_col_front(T** arr, const int rows, int& cols);
template <typename T>T* erase(T arr[], int& n);
template <typename T>T** erase_row(int** arr, int& rows, const int cols, const int index);
template <typename T>void erase_col(T** arr, const int rows, int& cols, const int index);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
#ifdef THEORY
	//������������ �������
/*
	������������ ���������� ������ ������ �������� ����� ���� ����� �� ����� ���������� ���������.
	�������������� ���� ������ ����� ��������� ��� ����� � ���������� ������ ������������� ������� ����� ������ ������������� ���������� ���������
	����� ������� ������������ ������ ����� �������� ��������� � �������� ������ ��������� �������:
*/
#endif // THEORY

	int n;   //������ �������
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n] {};

	//cout << int() << endl;//������� �������� �� ��������� ��� ���� ������ int

	FillRand(arr, n);
	Print(arr, n);

#ifdef THEORY
	// �������� �������� � ����� �������
/*int* buffer = new int[n + 1]{};
int value;
for (int i = 0; i < n; i++)
{
	buffer[i] = arr[i];
}
cout << "������� ����������� ��������: "; cin >> value;
buffer[n] = value;
delete[] arr;
arr = buffer;
n++;*/
#endif // THEORY

#ifdef DZ
//��

//��������� �������� � ����� �������
//arr = push_back(arr, n);

//��������� �������� � ������ �������
//arr = push_front(arr, n);

//��������� �������� � ������ �� ���������� �������
//arr = insert(arr, n);

//������� ��������� ������� �� �������
//arr = pop_back(arr, n);

//������� ������� ������� �� �������
//arr = pop_front(arr, n);

//������� �������� �� ������� �� ���������� �������
//arr = erase(arr, n);  

#endif // DZ

	Print(arr, n);

#ifdef THEORY
	//���������� � ��������� ������� ����� 
//for (int i = 0; i < n; i++)
//{
//	//��������� ���������� ���������� � �������� �������������
//	*(arr + i) = rand() % 100;
//}
//for (int i = 0; i < n; i++)
//{
//	//��� �� ����� �������� ��������������[]
//	cout << arr[i] << "\t";
//}  
#endif // THEORY

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
	//int rows;		//���������� ����� 
	//int cols;		//���������� ��������� ������
	//cout << "������� ���������� �����: "; cin >> rows;
	//cout << "������� ���������� ��������� ������: "; cin >> cols;
	//int** arr = new int* [rows] {};
	//for (int i = 0; i < rows; i++)
	//{
	//	arr[i] = new int[cols] {};
	//}
	//FillRand(arr, rows, cols);
	//Print(arr, rows, cols);
	////�������� �����
	//for (int i = 0; i < rows; i++)
	//{
	//	delete[] arr[i];
	//}
	////�������� ������� ����������
	//delete[] arr;

	int rows;
	int cols;
	int index;
	cout << "������� ���������� �����: "; cin >> rows;
	cout << "������� ���������� ��������� ������: "; cin >> cols;
	cout << "������� ������ ������: "; cin >> index;
	char** arr = allocate<char>(rows, cols);
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << delimiter << endl;

	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 200, 400);

	//push_col_back(arr, rows, cols);
	//FillRandCol(arr, rows, cols, cols - 1, 200, 400);

	//arr = push_row_front(arr, rows, cols);
	//FillRand(arr[0], cols,200,400);

	//push_col_front(arr, rows, cols);
	//FillRandCol(arr, rows, cols, 0, 200, 400);

	//arr = insert_row(arr, rows, cols,index);
	//FillRand(arr[index-1], cols, 200, 400);

	//arr = insert_col(arr, rows, cols,index);
	//FillRandCol(arr, rows, cols, index - 1, 200, 400);

	//arr = pop_row_back(arr, rows, cols);
	//pop_col_back(arr, rows, cols);
	//arr = pop_row_front(arr, rows, cols);
	//pop_col_front(arr, rows, cols);
	//arr = erase_row(arr, rows, cols, index);
	//erase_col(arr, rows, cols, index);

	Print(arr, rows, cols);
	clear(arr, rows);
#endif // DYNAMIC_MEMORY_2


}

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
		//����� �������� ��������������[]
		cout << arr[i] << "\t";
		//��������� ���������� ���������� � �������� �������������
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
			//����� �������� ��������������[]
			cout << arr[i][j] << "\t";
			//��������� ���������� ���������� � �������� �������������
			//cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}
}

#ifdef THEORY
/*
����� �������� ������������ ������ ����� �������� ������ ���� ������� int* arr = new int[n];
�������� new �������� ����������� ������� ������ ��� n ��������� ���� int � ���������� ����� ���������� ������ ���� ����� �� ����������� ��������� arr
�������� �� ������������ ������� ������� �������� � ����������� ������(stack) ������������ ������ �������� � ������������ ������(heap)
Heap(����) - ���� ��������� ����������� ������ � �� ����� �������� new �������� ������ �� ���������� ����������� � � ������������ ������� ���� ����������� ���� ������ ����� ��� ������ ���� � �� �� ��� � �������� � ��������� ������ ����� ���������� ������ �� ����� ����������
*/

/*
	��������� � ��������� ������������� �������
	� ��������� ������������� ������� ����� ��������� ����� ����� ��� � ��������� ������������ ������� ��������� ���������� ���� � �������� �������������(*(arr + i) = rand() % 100;) ��� �� ����� �������� ��������������[]
	������������ ������ ����� ����� ���������� � ������� ��� � ����������� �������, ��� ���� ������� �� ������ �������� ����������� ������ �� �������������
*/

/*
	����� ���� ��� ������ ��� �� ����� ��� ����� ������� ��� ������ �������� delete[]
	�������� delete ������� ������ ����������� ���������� �� ������ � ���������� � ������� ��
	���� ������ �������� ������ � �� ���������� � �� �� ���� ��� ������ ��������� ����������� ������ ���������� ��� ������� � ���������� ���������� ����� ��������� � ������� ������ �� ����� ���������� delete ������ ���� ����� ������� ������� ���������� new
*/
#endif // THEORY

#ifdef THEORY
//��������� ������������ �������
/*
	��� ���� ��� �� ������� ��������� ������������ ������ ����� ������� ��������� �� ��������� � �������� ������ ��� ������� ����������.
	������ ������� ������� ���������� ����� ������� ����� ������� ����� ������ ���������� �������.
	������ ����� ����� ����� ��������� ������ ���������� �������.
	��������� � ��������� ���������� ��� ������� ����� ����� ��� � ��������� ����������� ��� ������� ��������� ��������� ���� � ������� ���������� ������
	��� ���� ��� �� �������� ��������� ��� ������ � ������� ���������� ��� �� ������� ��������� ��������� �� ���������
*/
#endif // THEORY


template <typename T>T* push_back(T arr[], int& n)
{
	T* buffer = new T[n + 1]{};
	int value;
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	cout << "������� ����������� �������� � �����: "; cin >> value;
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
	cout << "������� ����������� �������� � ������: "; cin >> value;
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
	cout << "������� ����������� ��������: "; cin >> value;
	cout << "������� ������: "; cin >> index;
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
	cout << "�������� ���������� ��������: " << endl;
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
	cout << "�������� �������� ��������: " << endl;
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
	cout << "������� ������ ���������� �������� : "; cin >> index;
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