#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	double  P,S,K;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите число P:\n";
	cin>>P;

	K = 0;
	S = 1000;
	while (S<=1100) {
		S = S * (P / 100 + 1);
		K = K + 1;
	}

	cout<<"количсетво месяцев: "<< K<<"\n";
	cout<<"итоговый размер вклада: "<< S<<"\n";

	return 0;
}