#include <iostream>

using namespace std;
int a=0,b=0,answ=0;
int main()
{
    cout<<"Яшин ЛР8п2 Введите значение А- больший отрезок";
    cin>>a;
    cout<<"Введите значение B- меньший отрезок";
    cin>>b;
    answ=a/b;
    cout<<"\nв отрезке длинной "<<a<<" поместится "<<answ<<" отрезков длинной "<<b;
    return 0;
}