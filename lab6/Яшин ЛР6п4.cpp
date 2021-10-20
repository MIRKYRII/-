#include <iostream>
#include <math.h>
using namespace std;
int x=0,y=0;
int main()
{
    cout<<"Яшин ЛР6п4 введите значение х, для которого нужно посчитать значение функции y=3x^6-6x^2-7\n";
    cin>>x;
    y=3*pow(x,6)-6*pow(x,2)-7;
    cout<< "\nЗначение функции y=3x^6-6x^2-7 для х="<<x<<"\nРавно "<< y;
    return 0;
}
