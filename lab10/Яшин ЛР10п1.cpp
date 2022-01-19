#include <iostream>
using namespace std;
int a=0,b=0;
int main()
{
    cout<<"ЛР10п1 Проверить истинность высказывания a>2 и b<=3";
    cin>>a>>b;
    if((a>2)&&(b<=3)){
        cout<<"\nИстинно";
        }
    else{
        cout<<"\nЛожно";
    }
    return 0;
}
