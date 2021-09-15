﻿#include<iostream>
using namespace std;

void Exchange(int& a, int& b);						//в функции Exchange адрес 0x200; значение [2]; переменная'a';					0x204[3]'b'

															
void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b = 3;								//в функции меин 0x100[2]'a'					0x104[3]'b'
	//cout << a << "\t" << b << endl;
	Exchange(a, b);
	//cout << a << "\t" << b << endl;
}

void Exchange(int& a, int& b)							//в функции Exchange 0x200[2]'a'					0x204[3]'b'
{
	int buffer = a;
	a = b;
	b = buffer;
	cout << a << "\t" << b << endl;
}

/*
	Существует 3 способа передать параметры в функцию по значению, по указателю, по ссылке мы всегда ранее передавали параметры по значению
	при этом значения передоваемых переменых копируются в функцию при её вызове если функция изменяет принятые значения то все изменения происходят с их копиями при этом оригальные переданые переменые остаются не измеными
	Для того что бы функция могла изменить переданные в неё переменные их нужно передать по указателю или по ссылке 
*/

//Передача параметров по указателю
/*
	Для того что бы передать параметры в функцию по указателю принимаемые параметры функции должны быть указатели
	в теле функции эти указатели нужно разыменовывать, именно разыменование открывает прямой доступ к переданым переменым таким образом что их можно изменить.
	Кроме того при вызове функции в неё нужно передать не значения а адреса переменных и для этого надо взять адрес соответствующий переменной.
	При вызове функции принимающей параметры по указателю в неё копируется не значения а адреса передаваемых переменных.
*/

//Передача параметров по ссылке
/*
	
*/