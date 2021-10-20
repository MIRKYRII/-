#include <iostream>

using namespace std;
int n=0,answ=0;
int main()
{
    cout<<"Яшин ЛР9п1 С начала суток прошло N секунд(целое). Найти количество секунд прошедших с начала последней минуты\n Введите N ";
    cin>>n;
    answ=n%60;
    cout<<"\n С начала последней минуты прошло "<<answ<<"секунд";
    return 0;
}