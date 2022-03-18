#include <iostream>
#include <clocale>
#include<math.h>

double RingS(double R1, double R2)
{
	return pow(R1, 2) * 3.14 - pow(R2, 2) * 3.14;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double R1, R2, z;
	for (z = 0; z < 3; z++)
	{
		std::cout<<"Введите радиус окружности 1 \n";
		std::cin>>R1;
		std::cout<<"Ведите радиус окружности 2 \n";
		std::cin>>R2;

		if (R1 > R2) {
			std::cout<<"площадь кольца равна : "<<RingS(R1, R2)<<"\n";
		}
		else {
			std::cout<<"ошибка";
		}
	}
	return 0;
}