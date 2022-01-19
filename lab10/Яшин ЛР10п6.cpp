#include <iostream>
using namespace std;
int a=0,b=0,c=0;
int main()
{
    cout<<"ЛР10п6 Даны числа a,b,c - стороны треугольника, является ли треугольник прямоугольным ?\n";
    cout<<" введите длинну a ";
    cin>>a;
    cout<<" введите длинну b ";
    cin>>b;
    cout<<" введите длинну c ";
    cin>>c;
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){
        cout<<"\nИстинно";
        }
    else{
        cout<<"\nЛожно";
    }
    return 0;
}
