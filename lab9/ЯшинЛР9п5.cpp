#include <iostream>
using namespace std;
int year=0,answ=0;
int main()
{
    cout<<"ЛР9п5 Введите год, программа определит столетие";
    cin>>year;
    answ=1+year/100;
    cout<<"Указанный год в "<<answ<<"ом столетии";
    return 0;
}
