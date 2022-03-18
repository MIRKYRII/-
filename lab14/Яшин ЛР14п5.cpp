#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int  A,B;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите число A:\n";
	cin>>A;
	cout<<"Введите число B:\n";
	cin>>B;

	while ((A != 0) and (B !=0)) {
		if (A > B) {
			A = A % B;
		}
		else
			B = B % A;
	}

	cout<<"НОД равен: "<< A+B;

	return 0;
}