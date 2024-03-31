#include<iostream>
using namespace std;

#define tab "\t"
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
char Sum(const char arr[], const int n);

int AVG(const int arr[], const int n);
double AVG(const double arr[], const int n);
char AVG(const char arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);

void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	///*do//{
	//	cout << "Введите Минимально возможное случайное число: "; cin >> minRand;
	//	cout << "Введите Максимально возможное случайное число: "; cin >> maxRand;
	//	if (minRand == maxRand)cout << "пределы диапазона не должны совпадать" << endl;
	//} while (minRand==maxRand);*/
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сума елементов масива: " << Sum(arr, n) << endl;
	cout << "Средне арефметическое элементов масива: " << AVG(arr, n) << endl;
	cout << "Минелальное значение масива :" << minValueIn(arr, n)<<endl;
	cout << "Максимальный елемент масива: " << maxValueIn(arr, n)<<endl;
	int number_of_shifts;
	const int m = 8;
	double d_arr[m];
	FillRand(d_arr, m);
	Print(d_arr, m);
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

int AVG(const int arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double AVG(const double arr[], const int n) {
		return (double)Sum(arr, n) / n;
	}
char AVG(const char arr[], const int n) {
	return (double)Sum(arr, n) / n;
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