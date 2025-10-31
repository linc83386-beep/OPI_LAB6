#include <iostream>
#include <math.h>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double u;
	cout << "Введіть Y=";
	cin >> u;

	double product = 2.0;
	for (int u = 2; u <= 15; u++) {
		product *= log (u*y);
	}
	double A = sin(product);
	cout << "A=" << A << endl;

	return 0;
}
