#include <iostream>

using namespace std;
int a=0,b=8192,answ=0;
int main()
{
    cout<<"Яшин ЛР8п1 Введите значение - размер файла в байтах ";
    cin>>a;
    answ=a/b;
    cout<<"\nфайл весит "<<answ<<" КБайт";
    return 0;
}