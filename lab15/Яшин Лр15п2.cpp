#include <iostream>
#include <locale.h>
int Sign(double X){
	if (X < 0) {
		return -1;
	}
	if (X == 0) {
		return 0;
	}
	if (X > 0) {
		return 1;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	std::cout<<"Введите число :\n";
	std::cin>>A;
	std::cout<<"Введите число :\n";
	std::cin>>B;
	std::cout<<"Значение равно: \n"<< (Sign(A) + Sign(B));
	

	return 0;
}