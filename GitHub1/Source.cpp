#include <iostream>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

double division(double a, double b)
{
	return a / b;
}

double multiplication(double a, double b)
{
	return a * b;
}

double sqrtSum(double a, double b)
{
	return sqrt(a + b);
}

double sinSum(double a, double b)
{
	return sin(a + b);
}

double cosSum(double a, double b)
{
	return cos(a + b);
}

double fodase(double a)
{
	cout << "fodase" << endl;
}

int main()
{
	cout << "Eita" << endl;

	cout << "2 + 4 = " << sum(2, 4) << endl << "Putz!" << endl;

	cout << "2 / 6 = " << division(2, 6) << endl << "O loco bicho" << endl;

	cout << "2 / 0 = " << division(2, 0) << endl << "Pode isso Arnaldo" << endl;

	cout << "Seno! " << sinSum(4, 6) << endl;

	return 0;
}