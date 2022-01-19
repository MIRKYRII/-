#include <iostream>
using namespace std;
int a=0,b=0,c=0,d=0,e=0,f=0;
int main()
{
    cout<<"ЛР10п5 Проверить истинность высказывания введённое четырёхзначное число - полиндром\n";
    cout<<" введите четырёхзначное число ";
    cin>>f;
    e=f;
    a=e/1000;
    e=e%1000;
    b=e/100;
    e=e%100;
    c=e/10;
    e=e%10;
    d=e;
    f=1000*d+100*c+10*b+a;
    
    if(f=e){
        cout<<"\nИстинно";
        }
    else{
        cout<<"\nЛожно";
    }
    return 0;
}
