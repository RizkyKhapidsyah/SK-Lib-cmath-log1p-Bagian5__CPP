#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	double hasil;
	int x = 873;

	hasil = log1p(x);
	cout << "x = " << x << endl;
	cout << "log1p(x) = " << hasil << endl;

	_getch();
	return 0;
}