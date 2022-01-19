#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cout<<"Введите значение A:\n";
	cin>>A;
	cout<<"Введите значение B:\n";
	cin>>B;
	if (A > B) {
		B = A;
	}else if (A < B) {
		      A = B;
	} else {
		A = 0;
		B = 0;
	}
	cout<<"Значение переменной А:"<<A;
	cout<<"\nЗначение переменной В:"<<B;
	return 0;
}
