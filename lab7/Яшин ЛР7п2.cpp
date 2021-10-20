#include <iostream>
using namespace std;
double a,ar,p=3.14;
int main()
{
    cout<<"ЛР7 п1 введите значение угла в радианах , чтобы его преобразовать в градусы";
    cin>>ar;
    a=ar*180/p;
    cout<<a;
    return 0;
}
