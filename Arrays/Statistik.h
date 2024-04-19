#pragma once
#include"stdaf.h"
#include"Constants.h"
template<typename T>
T Sum(const T arr[], const int n);
template<typename T>
T  Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T AVG(const T arr[], const int n);
template<typename T>
T AVG(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T minValueIn(const T arr[], const int n);
template<typename T>
T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T maxValueIn(const T arr[], const int n);
template<typename T>
T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);