#include <iostream>

using namespace std;

double sum(double a, double b)
{
	return a + b;
}

double division(double a, double b)
{
	return a / b;
}

int main()
{
	cout << "Eita" << endl;

	cout << "2 + 4 = " << sum(2, 4) << endl << "Putz!" << endl;

	cout << "2 / 6 = " << division(2, 6) << endl << "O loco bicho" << endl;

	return 0;
}