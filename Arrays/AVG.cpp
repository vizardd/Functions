#include"AVG.h"
#include"Sum.h"

int AVG(int arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double AVG(double arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
int AVG(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
