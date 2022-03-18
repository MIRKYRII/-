#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int   N, F, F1, F2, K;
	setlocale(LC_ALL, "Rus");
	cout<<"Введите число N:\n";
	cin>>N;
    F1 = 0;
    F2 = 1;
	F = 0;
    K = 1;
	while (F < N) {
		K = K + 1;
		F = F2 + F1;
		F2 = F1;
		F1 = F;
		
	}
	cout<<"Порядковый номер введённного числа фиббоначи =:\n"<< K;
	return 0;
}