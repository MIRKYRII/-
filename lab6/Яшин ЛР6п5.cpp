#include <iostream>
#include <math.h>
using namespace std;
int x=0,y=0;
int main()
{
    cout<<"Яшин ЛР6п5 введите значение х, для которого нужно посчитать значение функции y=4*(x-3)^6-7(x-3)^3+2\n";
    cin>>x;
    y=4*pow((x-3),6)-7*pow((x-3),3)+2;
    cout<< "\nЗначение функции y=4*(x-3)^6-7(x-3)^3+2 для х="<<x<<"\nРавно "<< y;
    return 0;
}
