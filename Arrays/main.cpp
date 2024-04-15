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
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand = 0, double maxRend = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, char minRand = 0, char maxRend = 100);

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

int AVG(int arr[], const int n);
double AVG(double arr[], const int n);
int AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS);

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

void ShiftLeft(int arr[], const int n, const int number_of_sift);
void ShiftLeft(double arr[], const int n, const int number_of_sift);
void ShiftLeft(char arr[], const int n, const int number_of_sift);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift);
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift);

void ShiftRight(int arr[], const int n, const int number_of_sift);
void ShiftRight(double arr[], const int n, const int number_of_sift);
void ShiftRight(char arr[], const int n, const int number_of_sift);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift);
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_sift);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Unique(int arr[], const int n);
void Unique(int arr[ROWS][COLS], const int ROWS, const int COLS);

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
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сума елементов масива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минелальное значение масива :" << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts;
	//ShiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//ShiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Unique(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);cout << endl;

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сума елементов масива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(d_arr_2, ROWS, COLS) << endl;
	cout << "Минелальное значение масива :" << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts;
	//ShiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	//ShiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	//Print(d_arr_2, ROWS, COLS);
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << delimeter << endl;

	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сума елементов масива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минелальное значение масива :" << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный елемент масива: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
	//cout << "Введете количество сдвигов: "; cin >> number_of_shifts;
	//ShiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//ShiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
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
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRend) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, double minRand, double maxRend) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, char minRand, char maxRend) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(const double arr[], const int n) {
	for (int i = 0; i < n; i++) {
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
		for (int j = 0; j < COLS; j++)
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
		for (int j = 0; j < COLS; j++) {
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
void Sort(int arr[], const int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

	}
}
void Sort(double arr[], const int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

	}
}
void Sort(char arr[], const int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			 
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k==i ? j+1:0; l < COLS; l++)
				{
					//if (k == i&&l==0)l = j + 1;
					//if (l == COLS)break;
					if (arr[i][j] > arr[k][l]) {
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//if (k == i&&l==0)l = j + 1;
					//if (l == COLS)break;
					if (arr[i][j] > arr[k][l]) {
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//if (k == i&&l==0)l = j + 1;
					//if (l == COLS)break;
					if (arr[i][j] > arr[k][l]) {
						char buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Unique(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		bool unique;
		do
		{
		arr[i] = rand() % n;
		unique = true;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j]) {
				unique = false;
				break;
			}
		}
		} while (!unique);
		
	}
}
void Unique(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; i < COLS; j++) {
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++) {
					for (int l = 0; l < (k==i?j:COLS); l++) {
						if (arr[i][j] == arr[k][l]) {
							unique = false;
							break;
						}
					}if (!unique)break;
				}
			} while (!unique);
		}

	}
}