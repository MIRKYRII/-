#include <iostream>
#include <math.h>
using namespace std;
int a=0,b=0,c=0;
int main()
{
    cout<<"Яшин ЛР6п7 Введите число A которое нужно возвести в 15 степень\n";
    cin>>a;
    b=pow(a,3);
    c=pow(a,2);
    c=c*c*c*b*b*b;
    cout<< c;
    return 0;
}