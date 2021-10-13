#pragma once

#include"stdafx.h"

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
