#include <iostream>
using namespace std;
int a=0,d=0,e=0,answ=0;
int main()
{
    cout<<"Яшин ЛР8п5 введите трёхзначное число, программа поменяет место первой цифры в нём на последнее";
    cin>>a;
    if((a<1000)&&(a>99)){
        d=a/100;
        e=a%100;
        answ=e*10+d;
        cout<<answ;
    }
    else{
        cout<<"Число не трёхзначное";
    }
    return 0;
}