#include<iostream>
using namespace std;

#define tab "\t"
int FillRand(int minRand, int maxRand);//заполняем массив случайными числами 
void Print(int arr[], const int n);
void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void minValueIn(int arr[], const int n);
void maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void main() {
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	do
	{
		cout << "Введите Минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите Максимально возможное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "пределы диапазона не должны совпадать" << endl;
	} while (minRand==maxRand);
	if (maxRand < minRand) {
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = FillRand(minRand, maxRand);
	}
	Print(arr, n);
	cout << endl;
	Sum(arr, n);
	Avg(arr,n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть масив :"; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
}
int FillRand(int minRand, int maxRand) {
	return minRand + rand() % (maxRand - minRand);
}
void Print(int arr[], const int n) {
	 for (int i = 0; i < n; i++) {
		 cout << arr[i] << tab;
	}
}
void Sum(int arr[], const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		 sum += arr[i];
	}
	cout << "сума масива = " << sum << endl;
}
void Avg(int arr[], const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}cout << "Средне арефметическое = " << (double)sum / n << endl;
}
void minValueIn(int arr[], const int n){
	int Min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < Min) Min = arr[i];
	}
	cout << "Минемальный елемент = " << Min << endl;
}
void maxValueIn(int arr[], const int n) {
	int Max=arr[0];
	for (int i = 0; i < n; i++) {
		if(arr[i] > Max) Max = arr[i];
	}
	cout << "Максимальный елемент = " << Max << endl;
}
void shiftLeft(int arr[], const int n, int number_of_shifts) {
	for (int i = 0; i < number_of_shifts; i++) {
		int buffer = arr[0];
		for (int i = 0; i < n; i++) {
			arr[i] = arr[i + 1];
		}	arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)cout << arr[i] << "\t";
		cout << endl;
	}
}
