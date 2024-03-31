#include<iostream>
using namespace std;

#define tab "\t"
#define delimeter "\n---------------------------------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRend = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRend = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRend = 100);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS);


int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
char Sum(const char arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int AVG(const int arr[], const int n);
double AVG(const double arr[], const int n);
char AVG(const char arr[], const int n);
int AVG(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char AVG(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void main() {
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	int minRand, maxRand;
	///*do//{
	//	cout << "Введите Минимально возможное случайное число: "; cin >> minRand;
	//	cout << "Введите Максимально возможное случайное число: "; cin >> maxRand;
	//	if (minRand == maxRand)cout << "пределы диапазона не должны совпадать" << endl;
	//} while (minRand==maxRand);*/
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сума елементов масива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(i_arr, I_SIZE) << endl;
	cout << "Минелальное значение масива :" << minValueIn(i_arr, I_SIZE)<<endl;
	cout << "Максимальный елемент масива: " << maxValueIn(i_arr, I_SIZE)<<endl;
	cout << delimeter << endl;

	int number_of_shifts;
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << delimeter << endl;

	const int ROWS = 3;
	const int COLS = 4;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сума елементов масива: " << Sum(i_arr_2, ROWS,COLS) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(i_arr_2, ROWS,COLS) << endl;
	cout << "Минелальное значение масива :" << minValueIn(i_arr_2, ROWS,COLS) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(i_arr_2, ROWS,COLS) << endl;
	cout << delimeter << endl;  
}
void FillRand(int arr[], const int n, int minRand, int maxRand) {
	if (maxRand < minRand) {
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand) {
		double buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++) {
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand) {
		char buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++) {
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand , int maxRend ) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRend) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRend) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(const double arr[], const int n) {
	for (int i = 0; i < n; i++){
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const int arr[], const int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const char arr[], const int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS) {
for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

int Sum(const int arr[], const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
double Sum(const double arr[], const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;	
}
char Sum(const char arr[], const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS;j++)
		{ 
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS) {
	char sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int AVG(const int arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double AVG(const double arr[], const int n) {
		return (double)Sum(arr, n) / n;
	}
char AVG(const char arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
int AVG(const int arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS* COLS);
}
double AVG(const double arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
char AVG(const char arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(int arr[], const int n){
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

int maxValueIn(int arr[], const int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
char maxValueIn(char arr[], const int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++){
		if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}