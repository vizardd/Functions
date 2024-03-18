#include<iostream>
#include<Windows.h>
using namespace std;

int Sum(int a, int b,int c=0);
int Diff(int a, int b);
int Prod(int a, int b);
double Quote(int a, int b);
double Faktorial1(int a);
double Faktorial2(int b);
double Stepen(int a, int b);
double Power(double a, int n);
//#define POWER
//#define CALC
//#define FACKTORIAL
void main() {
	setlocale(LC_ALL, "");
#ifdef CALC
	int a, b;
	cout << "введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);//Использувание функции (Вызов  функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quote(a, b) << endl;
#endif // CALC

#ifdef FACKTORIAL
	int a, b;
	cout << "Фактрориал числа " << a << "\n" << Faktorial1(a) << endl;
	cout << "Фактрориал числа " << b << "\n" << Faktorial2(b) << endl;
#endif // 
#ifdef POWER
	int a;
	int n;
	cout << "Ведите основания степени: "; cin >> a;
	cout << "Ведите показание степени: "; cin >> n;
	cout << a << " ^ " << n << " = " << Power(a, n) << endl;
	system("PAUSE");
	main();
#endif // POWER


	//cout << "Возводим число " << a << " в степень " << b << "\n" << "получаем " << "\n" << Stepen(a, b) << endl;
}
double Power(double a, int n) {
	double N = 1;
	if (n < 0) {
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++) {
		N *= a;
	}
	return N;
}
double Stepen(int a, int b) {
	double STep = 1;//a ----- число возводимое в с тепень
	//b ------ степень в которую возводим чесло
	if (b < 0) {
		a = 1 / a;
		b = -b;
	}
	for (int i = 1; i < b; i++) {
		STep *= a;
	}return STep;
}
int Sum(int a, int b) {
	int d = a + b;
	return d;
}
int Diff(int a, int b) {
	return a - b;
}
int Prod(int a, int b) {
	return a * b;
}
double Quote(int a, int b) {
	return (double)a / b;
}
double Faktorial1(int a) {
	double factarial = 1; for (int i = 1; i <= a; i++)
	{
		factarial *= i;
	}return factarial;
}
double Faktorial2(int b) {
	double factarial = 1; for (int i = 1; i <= b; i++)
	{
		factarial *= i;
	}return factarial;
}