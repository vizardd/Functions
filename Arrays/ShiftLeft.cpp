#include"ShiftLeft.h"

void ShiftLeft(int arr[], const int n, const int number_of_sift) {
	for (int i = 0; i < number_of_sift; i++) {
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, const int number_of_sift) {
	for (int i = 0; i < number_of_sift; i++) {
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(char arr[], const int n, const int number_of_sift) {
	for (int i = 0; i < number_of_sift; i++) {
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift) {
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, number_of_sift);
	}*/
	for (int i = 0; i < number_of_sift; i++) {
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i < ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift) {
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, number_of_sift);
	}*/
	for (int i = 0; i < number_of_sift; i++) {
		double buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i < ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift) {
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, number_of_sift);
	}*/
	for (int i = 0; i < number_of_sift; i++) {
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i < ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
