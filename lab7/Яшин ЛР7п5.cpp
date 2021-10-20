#include <iostream>
using namespace std;
double a,x,b,answ;
int main()
{
    cout<<"ЛР7п5 Решить линейное уравнение a*x+b=0\nВведите a\n";
    cin>>a;
    cout<<"\nВведите b\n";
    cin>>b;
    if(a!=0){
    x=-b/a;
    cout<<x<<"\n";
    }
    else{
        cout<<"вы нарушили условие a=0";
    }
    return 0;
}