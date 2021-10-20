#include <iostream>
using namespace std;
double a,ar,p=3.14;
int main()
{
    cout<<"ЛР7 п1 введите значение угла в градусах, чтобы его преобразовать в радианы";
    cin>>a;
    ar=a*p/180;
    cout<<ar;
    return 0;
}
