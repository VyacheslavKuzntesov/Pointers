#include<iostream>
using namespace std;
using std::cout;
using std::cin;
//#define THEORY
//#define DZ
#define delimiter "\n------------------------------------------------\n"

int** allocate(const int rows, const int cols);
void clear(int** arr, const int rows);
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRandCol(int** arr, const int rows, const int cols, int nomer_elementa , int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);
void Print(int** arr, const int rows, const int cols);
int* push_back(int arr[], int& n);
int** push_row_back(int** arr, int& rows, const int cols);
void push_col_back(int** arr, const int rows, int& cols);
int* push_front(int arr[], int& n);
int** push_row_front(int** arr, int& rows, const int cols);
void push_col_front(int** arr, const int rows, int& cols);
int* insert(int arr[], int& n);
int** insert_row(int** arr, int& rows, const int cols, const int index);
int** insert_col(int** arr, const int rows, int& cols, const int index);
int* pop_back(int arr[], int& n);
int** pop_row_back(int** arr, int& rows, const int cols);
void pop_col_back(int** arr, const int rows, int& cols);
int* pop_front(int arr[], int& n);
int** pop_row_front(int** arr, int& rows, const int cols);
void pop_col_front(int** arr, const int rows, int& cols);
int* erase(int arr[], int& n);
int** erase_row(int** arr, int& rows, const int cols, const int index);
void erase_col(int** arr, const int rows, int& cols, const int index);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
#ifdef THEORY
	//Динамические массивы
/*
	Динамическим называется массив размер которого может быть задан во время выполнения программы.
	Предварительно этот размер можно вычислить или вести с клавиатуры размер динамического массива можно задать целочисленным переменным значением
	Чтобы обявить динамический массив нужно объявить указатель и выделить память следующим образом:
*/
#endif // THEORY

	int n;   //размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};

	//cout << int() << endl;//Выводим значение по умолчанию для типа данных int

	FillRand(arr, n);
	Print(arr, n);

#ifdef THEORY
	// Добавить значение в конец массива
/*int* buffer = new int[n + 1]{};
int value;
for (int i = 0; i < n; i++)
{
	buffer[i] = arr[i];
}
cout << "Введите добавляемое значение: "; cin >> value;
buffer[n] = value;
delete[] arr;
arr = buffer;
n++;*/
#endif // THEORY

#ifdef DZ
//ДЗ

//Добавляет значение в конец массива
//arr = push_back(arr, n);

//Добавляет значение в начало массива
//arr = push_front(arr, n);

//Добавляет значение в массив по указанному индексу
//arr = insert(arr, n);

//Удаляет последний элемент из массива
//arr = pop_back(arr, n);

//Удаляет нулевой элемент из массива
//arr = pop_front(arr, n);

//Удаляет значение из массива по указанному индексу
//arr = erase(arr, n);  

#endif // DZ

	Print(arr, n);

#ifdef THEORY
	//Обращаться к элементам массива можно 
//for (int i = 0; i < n; i++)
//{
//	//Используя арифметику указателей и оператор разыменования
//	*(arr + i) = rand() % 100;
//}
//for (int i = 0; i < n; i++)
//{
//	//или же через оператор индексирования[]
//	cout << arr[i] << "\t";
//}  
#endif // THEORY

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
//int rows;		//Количество строк 
//int cols;		//Количество элементов строки
//cout << "Введите количество строк: "; cin >> rows;
//cout << "Введите количество элементов строки: "; cin >> cols;
//int** arr = new int* [rows] {};
//for (int i = 0; i < rows; i++)
//{
//	arr[i] = new int[cols] {};
//}
//FillRand(arr, rows, cols);
//Print(arr, rows, cols);
////удаление строк
//for (int i = 0; i < rows; i++)
//{
//	delete[] arr[i];
//}
////удаление массива указателей
//delete[] arr;

	int rows;
	int cols;
	int index;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;
	cout << "Введите индекс строки: "; cin >> index;
	int** arr = allocate(rows, cols);
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	cout << delimiter << endl;

	//arr = push_row_back(arr, rows, cols);
	//FillRand(arr[rows - 1], cols,200,400);
	
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

void FillRandCol(int** arr, const int rows, const int cols, int nomer_elementa , int minRand, int maxRand)
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
		//через оператор индексирования[]
		cout << arr[i] << "\t";
		//Используя арифметику указателей и оператор разыменования
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
			//через оператор индексирования[]
			//cout << arr[i][j] << "\t";
			//Используя арифметику указателей и оператор разыменования
			cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl;
	}
}

#ifdef THEORY
/*
Чтобы объявить динамический массив нужно выделить память след образом int* arr = new int[n];
Оператор new выделяет непрерывную область памяти для n элементов типа int и возвращает адрес выделенной памяти этот адрес мы присваиваем указателю arr
Вотличии от статического массива который хранится в статической памяти(stack) динамический массив хранится в динамической памяти(heap)
Heap(куча) - куча свободной оперативной памяти в ОС когда оператор new выделяет память он фактически запрашивает её у Операционной Системе если непрерывный блок памяти опред кол памяти есть у ОС то она её выделяет в противном случае может возникнуть ошибка на этапе выполнения
*/

/*
	Обращение к элементам динамического массива
	К элементам динамического массива можно обращатся точно также как к элементам статического массива используя арифметику указ и оператор разыменования(*(arr + i) = rand() % 100;) или же через оператор индексирования[]
	Динамический массив также можно передавать в функцию как и статические массивы, при этом функция не сможет отличить статический массив от динамического
*/

/*
	После того как массив уже не нужен его нужно удалить это делает оператор delete[]
	Оператор delete удаляет массив освобождает занимаемую им память и возвращает её обратно ОС
	Если только выделять память и не возвращать её ОС то рано или поздно свободная оперативная память закончится что привидёт к аварийному завершению нашей программы с потерей данных по этому операторов delete должно быть ровно столько сколько операторов new
*/
#endif // THEORY

#ifdef THEORY
//Двумерные динамические массивы
/*
	Для того что бы обявить двумерный динамический массив нужно обявить указатель на указатель и выделить память для массива указателей.
	Каждый элемент массива указателей будет хранить адрес какойто одной строки двумерного массива.
	Только после этого можно создавать строки двумерного массива.
	Обращятся к элементам двумерного дин массива можно также как к элементам одномерного дин массива используя вложенный цикл и двойные квадратные скобки 
	Для того что бы передать двумерный дин массив в функцию достаточно что бы функция принемала указатель на указатель
*/
#endif // THEORY


int* push_back(int arr[], int& n)
{
	int* buffer = new int[n + 1]{};
	int value;
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	cout << "Введите добавляемое значение в конец: "; cin >> value;
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
		buffer[i+1] = arr[i];
	}
	cout << "Введите добавляемое значение в начало: "; cin >> value;
	buffer[0] = value;
	delete[] arr;
	n++;
	return buffer;
}

int** push_row_front(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows + 1]{};
	for (int i = 1; i < rows+1; i++)
	{
		buffer[i] = arr[i-1];
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
		for (int j = 0,k=1; j < cols; j++,k++)buffer[k] = arr[i][j];
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
	cout << "Введите добавляемое значение: "; cin >> value;
	cout << "Введите индекс: "; cin >> index;
	for (int i = 0; i < n; i++,h++)
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

int** insert_row(int** arr, int& rows, const int cols,const int index)
{
	int** buffer = new int* [rows + 1]{};
	for (int i = 0, j = 0; i < rows+1; i++, j++)
	{
		buffer[j]=(j == (index - 1) ? (i--, new int[cols] {}) : arr[i]);
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
		for (int j = 0 , k = 0; j < cols; j++,k++)
		{
			buffer[i][(k == (index - 1) ? ++k : k )] = arr[i][j];
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
	for (int i = 0; i < n-1; i++)
	{
		buffer[i] = arr[i];
	}
	cout << "Удаление последнего элемента: " << endl;
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
		buffer[i-1] = arr[i];
	}
	cout << "Удаление нулевого элемента: " << endl;
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
	cout << "Введите индекс удаляемого значения : "; cin >> index;
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
	int** buffer = new int* [rows -1]{};
	for (int i = 0, j = 0; i < rows; i++, j++)
	{
		buffer[j] = arr[(i == (index - 1) ? ++i : i)];
	}
	delete[] arr[index-1];
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