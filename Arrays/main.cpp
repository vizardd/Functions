#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sum.h"
#include"AVG.h"
#include"minValueIn.h"
#include"maxValueIn.h"
#include"ShiftLeft.h"
#include"ShiftRight.h"
#include"Sort.h"
#include"Unique.h"


void main() {
	setlocale(LC_ALL, "");
	const int I_SIZE = 10;
	int i_arr[I_SIZE];
	int minRand, maxRand;
	///*do//{
	//	cout << "Введите Минимально возможное случайное число: "; cin >> minRand;
	//	cout << "Введите Максимально возможное случайное число: "; cin >> maxRand;
	//	if (minRand == maxRand)cout << "пределы диапазона не должны совпадать" << endl;
	//} while (minRand==maxRand);*/
	//FillRand(i_arr, I_SIZE);
	Unique(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE); cout << endl;
	cout << "Сума елементов масива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(i_arr, I_SIZE) << endl;
	cout << "Минелальное значение масива :" << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(i_arr, I_SIZE) << endl;
	int number_of_shifts;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts; cout << endl;
	//ShiftLeft(i_arr, I_SIZE, number_of_shifts);


	cout << delimeter << endl;

	//ShiftRight(i_arr, I_SIZE, number_of_shifts);
	//Print(i_arr, I_SIZE); cout << endl;
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	///*do//{
	//	cout << "Введите Минимально возможное случайное число: "; cin >> minRand;
	//	cout << "Введите Максимально возможное случайное число: "; cin >> maxRand;
	//	if (minRand == maxRand)cout << "пределы диапазона не должны совпадать" << endl;
	//} while (minRand==maxRand);*/
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE); cout << endl;
	cout << "Сума елементов масива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(d_arr, D_SIZE) << endl;
	cout << "Минелальное значение масива :" << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(d_arr, D_SIZE) << endl;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts; cout << endl;
	//ShiftLeft(d_arr, I_SIZE, number_of_shifts);

	//ShiftRight(d_arr, I_SIZE, number_of_shifts);
	//Print(d_arr, I_SIZE); cout << endl;
	cout << delimeter << endl;

	char c_arr[I_SIZE];
	///*do//{
	//	cout << "Введите Минимально возможное случайное число: "; cin >> minRand;
	//	cout << "Введите Максимально возможное случайное число: "; cin >> maxRand;
	//	if (minRand == maxRand)cout << "пределы диапазона не должны совпадать" << endl;
	//} while (minRand==maxRand);*/
	FillRand(c_arr, I_SIZE);
	Print(c_arr, I_SIZE);
	Sort(c_arr, I_SIZE);
	Print(c_arr, I_SIZE); cout << endl;
	cout << "Сума елементов масива: " << Sum(c_arr, I_SIZE) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(i_arr, I_SIZE) << endl;
	cout << "Минелальное значение масива :" << minValueIn(c_arr, I_SIZE) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(c_arr, I_SIZE) << endl;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts; cout << endl;
	//ShiftLeft(i_arr, I_SIZE, number_of_shifts);
	//ShiftRight(i_arr, I_SIZE, number_of_shifts);
	//Print(i_arr, I_SIZE); cout << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);


	cout << delimeter << endl;

	const int ROWS =3;
	const int COLS = 4;
	int i_arr_2[ROWS][COLS];
	//FillRand(i_arr_2, ROWS, COLS);
	Unique(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	cout << "Сума елементов масива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минелальное значение масива :" << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts;
	//ShiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//ShiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS); cout << endl;
	
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS); cout << endl;
	cout << "Сума елементов масива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(d_arr_2, ROWS, COLS) << endl;
	cout << "Минелальное значение масива :" << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts;
	//ShiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	//ShiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	//Print(d_arr_2, ROWS, COLS);
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS); cout << endl;
	cout << delimeter << endl;

	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS); cout << endl;
	cout << "Сума елементов масива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минелальное значение масива :" << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts;
	//ShiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//ShiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS); cout << endl;
}

