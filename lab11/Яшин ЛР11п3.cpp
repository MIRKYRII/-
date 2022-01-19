#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double A,B,C;
	cout<<"Введите значение A:\n";
	cin>>A;
	cout<<"Введите значение B:\n";
	cin>>B;
	cout<<"Введите значение C:\n";
	cin>>C;
	if ((fabs(A - B)) < fabs(A - C)) {
		cout<<"Ближе к точке А находится точка В:"<<fabs(A-B);
	} 
	else {
		cout<<"Ближе к точке А находится точка C:"<<fabs(A - C);
	}

	return 0;
}