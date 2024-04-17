#include<iostream>
using namespace std;

#define tab "\t"
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 

template<typename T>
void Print(const T arr[], const int n);
template<typename T>
T Sum(const T arr[], const int n);
int AVG(const int arr[], const int n);


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

	int number_of_shifts;
	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Сума елементов масивоа: " << Sum(brr, m) << endl;
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
template<typename T>
void Print(const T arr[], const int n) {
	for (int i = 0; i < n; i++){
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
T Sum(const T arr[], const int n) {
	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

int AVG(const int arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
