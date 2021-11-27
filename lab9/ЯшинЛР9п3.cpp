#include <iostream>

using namespace std;
int n=0,y=0,answ=0;
int main()
{
    cout<<"Яшин ЛР9п2 С начала года прошло N дней. Найти день недели, если 1 января был днём недели Y(1-7).\n введите N";
    cin>>n;
    cout<<"\nвведите y";
    cin>>y;
    answ=(n+y)%7;
    switch(answ){
        case 1:
        cout<<"Выбранный день= понедельник";
        break;
        case 2:
        cout<<"Выбранный день= вторник";
        break;
        case 3:
        cout<<"Выбранный день= среда";
        break;
        case 4:
        cout<<"Выбранный день= четверг";
        break;
        case 5:
        cout<<"Выбранный день= пятница";
        break;
        case 6:
        cout<<"Выбранный день= суббота";
        break;
        case 0:
        cout<<"Выбранный день= воскресенье";
        break;
    }
    return 0;
}
