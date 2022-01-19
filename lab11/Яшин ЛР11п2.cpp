#include <iostream>
using namespace std;
int main()
{
	int x, y,z;
	cout<<"Введите значение x:\n";
	cin>>x;
	cout<<"Введите значение y:\n";
	cin>>y;
	cout<<"Введите значение z:\n";
	cin>>z;
	if ((x <= y) && (x <= z)) {
		cout<<"сумма двух наибольших чисел: \n"<< y+z;
	} 
	else if ((y <= x) && (y <= z)) {
		cout<<"сумма двух наибольших чисел: \n"<< x + z;
	}
	else if ((z <= x) && (z <= y)) {
		cout<<"сумма двух наибольших чисел: \n"<< x + y;
	} 

	return 0;
}