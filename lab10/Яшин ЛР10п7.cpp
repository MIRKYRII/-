#include <iostream>
using namespace std;
int a=0,b=0,c=0;
int main()
{
    cout<<"ЛР10п7 Даны числа a,b,c - стороны треугольника, существует ли такой треугольник? \n";
    cout<<" введите длинну a ";
    cin>>a;
    cout<<" введите длинну b ";
    cin>>b;
    cout<<" введите длинну c ";
    cin>>c;
    if(a+b>c){
        cout<<"\nИстинно";
        }
    else{
        cout<<"\nЛожно";
    }
    return 0;
}
