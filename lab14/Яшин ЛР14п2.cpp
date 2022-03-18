#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	double  B, A,answ;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите A:\n";
	cin>>A;
	cout<<"Введите B:\n";
	cin>>B;
    answ=A;
	while ((answ - B) >= 0) {
		answ = answ - B;
	}

	cout<<"Значение незанятой части А:"<< answ;
	return 0;
}