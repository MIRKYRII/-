#include <iostream>
#include <locale.h>


void PowerA3(double A, double* B) {
	*B = A * A * A;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int s;
	for (s = 1; s <= 5; s++){
		double A, B;
		std::cout<<"Введите число :\n";
		std::cin>>A;
		PowerA3(A, &B);
		std::cout<<"A в кубе равно: \n"<<B;
	}

	return 0;
}