#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x,y;
	cout<<"Введите значение x:\n";
	cin>>x;
	cout<<"Введите значение y:\n";
	cin>>y;

	if ((x > 0) && (y > 0)) {
		cout<<"Точка лежит в 1 координатной четверти";
	}
	else if ((x < 0) && (y > 0)) {
		cout<<"Точка лежит в 2 координатной четверти";
	}
	else if ((x < 0) && (y < 0)) {
		cout<<"Точка лежит в 3 координатной четверти";
	}
	else if ((x > 0) && (y < 0)) {
		cout<<"Точка лежит в 4 координатной четверти";
	} 

	return 0;
}