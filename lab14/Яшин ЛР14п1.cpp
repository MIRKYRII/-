#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	double x, y, B, A;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите A:\n";
	cin>>A;
	cout<<"Введите B:\n";
	cin>>B;

	if (A < B) {
		for (y = A; y <= B; y++) {
		for (x = 1; x <= y; x++) {
			cout<<"значение равно: "<<y<<"\n";
		}
		}
	
	}
	else if(A>B){
	    for (y = A; y >= B; y--) {
		for (x = 1; x <= y; x++) {
			cout<<"значение равно: "<<y<<"\n";
		}
		}
	    
	}
	return 0;
}