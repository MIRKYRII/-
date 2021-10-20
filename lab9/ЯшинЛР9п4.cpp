#include <iostream>

using namespace std;
int a=0,b=0,c=0,calc1=0,calc2=0,answ1=0,answ2=0;
int main()
{
    cout<<"Яшин ЛР9п4 введите размеры прямоугольника AxB и квадрата CxC\nA= ";
    cin>>a;
    cout<<"\nB= ";
    cin>>b;
    cout<<"\nC= ";
    cin>>c;
    calc1=a/c;
    calc2=b/c;
    answ1=calc2*calc1;
    answ2=a*b-c*c*answ1;
    cout<<"В прямоугольнике "<<a<<" x "<<b<<" поместится "<<answ1<<" квадратов со стороной "<<c<<"\nНезанятое пространство будет составлять "<<answ2;
    return 0;
}