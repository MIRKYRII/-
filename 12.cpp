#include <iostream>

using namespace std;

int main(){
    int a=0;
    const float p=3.14;
    cout<<"Задание 1.2, введите диаметр окружности чтобы рассчитать её длину\n";
    cin>> a;
    cout<<"Длина окружности с диаметром "<< a<<"= "<<p*a<<"\n";
    return 0;
}


