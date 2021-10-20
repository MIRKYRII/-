#include <iostream>
#include <math.h>
using namespace std;
int a=0,b=0;
int main()
{
    cout<<"Яшин ЛР6п6 Введите число A которое нужно возвести в 8 степень\n";
    cin>>a;
    b=pow(a,2);
    b=b*b*b*b;
    cout<< b;
    return 0;
}