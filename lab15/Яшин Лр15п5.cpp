#include <iostream>
#include <clocale>
int Fact2(int N)
{
	int x, y;
	if (N % 2 == 0){
		x = 1;
		y = 2;
		while (N > 0){
			x = x * y;
			y = y + 2;
			N = N - 2;
		}
		return x;
	}
	else{
		x = 1;
		y = 1;
		while (N > 0){
			x = x * y;
			y = y + 2;
			N = N - 2;
		}
		return x;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	std::cout<<"Введите число N \n";
	std::cin>>N;

	if (N > 0){
		std::cout<<"факториал N : "<< Fact2(N);
	}
	else{
		std::cout<<"ошибка";
	}
	return 0;
}