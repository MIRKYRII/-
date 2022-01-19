#include <iostream>
using namespace std;
int a=0,b=0,c=0;
int main()
{
    cout<<"ЛР10п2 Проверить истинность высказывания A<B<C.";
    cout<<" введите a ";
    cin>>a;
    cout<<" введите b ";
    cin>>b;
    cout<<" введите c ";
    cin>>c;
    if((a<b)&&(b<c)){
        cout<<"\nИстинно";
        }
    else{
        cout<<"\nЛожно";
    }
    return 0;
}
