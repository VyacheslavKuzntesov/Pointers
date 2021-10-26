#include<iostream>

#include"FillRand.h"
#include"Print.h"
#include"Memory.h"
//#include"FillRand.cpp"
//#include"Print.cpp"
//#include"Memory.cpp"

using namespace std;
using std::cout;
using std::cin;

//#define THEORY
//#define DZ
#define delimiter "\n------------------------------------------------\n"
//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2
//#define MAIN

#ifdef MAIN
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

#endif // MAIN



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


