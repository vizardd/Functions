#include"minValueIn.h"

int minValueIn(int arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
char minValueIn(char arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
