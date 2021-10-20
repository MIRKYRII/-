#include <iostream>
using namespace std;
int a=0,d=0,e=0,answ=0;
int main()
{
    cout<<"Яшин ЛР8п4 введите двухзначное число, я поменяю цифры в нём местами";
    cin>>a;
    if((a<100)&&(a>9)){
        d=a/10;
        e=a%10;
        answ=e;
        e=d;
        d=answ;
        answ=d*10+e;
        cout<<answ;
    }
    else{
        cout<<"Число не двухзначное";
    }
    return 0;
}
