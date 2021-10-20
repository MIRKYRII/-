#include <iostream>
using namespace std;
double a1,a2,b1,b2,c1,c2,x,y,d,d1,d2;
int main()
{
    cout<<"ЛР7п6 Решить систему линейный уравнений (a1*x+b1*y=c1)&(a2*x+b2*y=c2)\nВведите a1\n";
    cin>>a1;
    cout<<" Введите b1 ";
    cin>>b1;
    cout<<" Введите c1 ";
    cin>>c1;
    cout<<" Введите a2 ";
    cin>>a2;
    cout<<" Введите b2 ";
    cin>>b2;
    cout<<" Введите c2 ";
    cin>>c2;
    d=a1*b2-b1*a2;
    if(d!=0){
    d1=c1*b2-b1*c2;
    d2=a1*c2-c1*a2;
    x=d1/d;
    y=d2/d;
    cout<<"\nрешением системы уравнений\n"<<a1<<"*x+"<<b1<<"*y="<<c1<<"\n"<<a2<<"*x+"<<b2<<"*y="<<c2<<"\nЯвляется x ="<<x<<" y="<<y;
    }
    else{
        cout<<"определитель = 0";
    }
    return 0;
}