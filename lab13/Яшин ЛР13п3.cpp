#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	double x, y, N;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите N:\n";
	cin>>N;

	x = 0;
	for (y = 1; y <= N; y++) {
		x = x + (2 * y - 1);
	}
	cout<<"Квадрат равен: "<< x;
    
	return 0;
}