#include <iostream>
using namespace std;
int a=0,b=0;
int main()
{
    cout<<"ЛР10п3 Проверить истинность высказывания введённое число чётное и двухзначное.";
    cout<<" введите целое положительное число ";
    cin>>a;
    if((a%2==0)&&(a<100)&&(a>9)){
        cout<<"\nИстинно";
        }
    else{
        cout<<"\nЛожно";
    }
    return 0;
}
