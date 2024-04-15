#include"ShiftRight.h"
#include"ShiftLeft.h"
void ShiftRight(int arr[], const int n, const int number_of_sift) {
	ShiftLeft(arr, n, n - number_of_sift);
}
void ShiftRight(double arr[], const int n, const int number_of_sift) {
	ShiftLeft(arr, n, n - number_of_sift);
}
void ShiftRight(char arr[], const int n, const int number_of_sift) {
	ShiftLeft(arr, n, n - number_of_sift);
}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift) {
	ShiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_sift);
}
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift) {
	ShiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_sift);
}
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift) {
	ShiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_sift);
}
