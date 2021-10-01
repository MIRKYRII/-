#include <iostream>

using namespace std;

int main(){
    double a=0, b=0,c=0;
    cout<<"Задание 1.3, введите 2 числа для которых нужно подсчитать среднее арифметическое\n";
    cin>> a>> b;
    c=(a+b)/2;
    cout<<"среднее арифметическое чисел "<< a<<" и "<< b<<"= "<<c<<"\n";
    return 0;
}
