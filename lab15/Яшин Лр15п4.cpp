#include <iostream>
#include <clocale>

void Quarter(int x, int y)
{
	if ((x > 0) && (y > 0)){
		std::cout<<"Точка лежит в 1-ой координатной плоскости \n";
	}
	else if ((x < 0) && (y>0)) {
		std::cout<<"очка лежит во 2-ой координатной плоскости \n";
	}
	else if ((x < 0) && (y < 0)){
		std::cout<<"ТТочка лежит в 3-ей координатной плоскости \n";
	}
	else if ((x > 0) && (y < 0)){
		std::cout<<"Точка лежит в 4-ой координатной плоскости \n";
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, z;
	for (z = 0; z <= 3; z++)
	{
		std::cout<<"Введите значение переменной \n";
		std::cin>>x;
		std::cout<<"Введите значение переменной \n";
		std::cin>>y;
		if ((x != 0) && (y != 0)){
			Quarter(x, y);
		}
		else{
			std::cout<<"ошибка";
		}


	}
	return 0;
}