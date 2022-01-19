#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	double x,x1, y, N,A;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите N:\n";
	cin>>N;
	cout<<"Введите А:\n";
	cin>>A;

	x = 1;
	x1 = 1;

	for (y = 1; y <= N; y++) {
		x1 = x1 * A;
		x = x + x1;
	}
	cout<<"сумма равна: "<< x;

	return 0;
}