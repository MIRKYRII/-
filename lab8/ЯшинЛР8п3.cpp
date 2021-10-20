#include <iostream>

using namespace std;
int a=0,b=0,answ=0;
int main()
{
    cout<<"Яшин ЛР8п3 Введите значение А- больший отрезок";
    cin>>a;
    cout<<"Введите значение B- меньший отрезок";
    cin>>b;
    answ=a%b;
    cout<<"\nостаток от деления "<<a<<" на "<<b<<" = "<<answ;
    return 0;
}