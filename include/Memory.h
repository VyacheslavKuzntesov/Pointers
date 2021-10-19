#pragma once
#include<iostream>
using namespace std;

int** allocate(const int rows, const int cols);
void clear(int** arr, const int rows);
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