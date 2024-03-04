#include<iostream>
using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quote(int a, int b);
double Faktorial1(int a);
double Faktorial2(int b);
void main() {
	setlocale(LC_ALL, "");
	int a, b;
	cout << "введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " <<Diff(a,b) << endl;
	cout << a << " * " << b << " = " <<Prod(a,b) << endl;
	cout << a << " / " << b << " = " <<Quote(a,b) << endl;
	cout << "Фактрориал числа " << a << "\n" << Faktorial1(a) << endl;
	cout << "Фактрориал числа " << b << "\n" << Faktorial2(b) << endl;
}
int Sum(int a, int b) {
	int c = a + b;
	return c;
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
	int i = 1;
	double factarial = 1; for (i; i <= a; i++)
	{
		factarial *= i;
	}return factarial;
}
double Faktorial2(int b) {
	int i = 1;
	double factarial = 1; for (i; i <= b; i++)
	{
		factarial *= i;
	}return factarial;
}