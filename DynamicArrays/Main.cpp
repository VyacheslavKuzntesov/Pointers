#include<iostream>
using namespace std;
#define THEORY
#define DZ

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int* push_back(int arr[], int& n);
int* push_front(int arr[], int& n);
int* insert(int arr[], int& n);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n);

void main()
{
	setlocale(LC_ALL, "");
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
	arr = erase(arr, n);  

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
}

void FillRand(int arr[], const int n) 
{
	for (int i = 0; i < n; i++)
	{
		//Используя арифметику указателей и оператор разыменования
		*(arr + i) = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//или же через оператор индексирования[]
		cout << arr[i] << "\t";
	}
	cout << endl;
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