#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	double  N,K,x;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите число N:\n";
	cin>>N;

	K = 0;
	x = 0;
	while (x<N) {
		K = K + 1;
		x = K + x;
	}

	cout<<"число равно: "<< K<<"\n";
	cout<<"сумма равна: "<< x<<"\n";
	return 0;
}