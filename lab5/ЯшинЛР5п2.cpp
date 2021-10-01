#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=0,b=0,c=0,ac=0,bc=0;
    cout <<"Задание 5.2, введите координату точки A\n";
    cin >> a;
    cout <<"\nВведите координату точки B\n";
    cin >> b;
    cout <<"\nВведите координату точки С\n";
    cin >> c;
    ac=abs(c-a);
    bc=abs(c-b);
    cout << "Длина отрезка AC = " << ac <<"\n"<< "Длина отрезка BC =" << bc <<"\n" << "AC + BC = "<<ac+bc;
    return 0;
}