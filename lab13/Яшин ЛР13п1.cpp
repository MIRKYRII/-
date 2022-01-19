#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	double x,y;
	setlocale(LC_ALL, "Rus");
	cout<<"Цена конфет за 1 кг:\n";
	cin>>x;

	for (y = 1; y < 10; y++) {
		cout<<"стоимость 0."<<y<<" кг конфет: "<< x*y/10<<"\n";

	}
		
	return 0;
}