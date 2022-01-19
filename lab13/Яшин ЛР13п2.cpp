#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	double x,y, N;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите N:\n";
	cin>>N;

	x = 1;
	for (y = 1; y <= N; y++) {
		x = x * (1 + 0.1 * y);
	}
	cout<<"Произведение равно:"<< x;

	return 0;
}