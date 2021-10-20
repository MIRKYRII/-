#include <iostream>

using namespace std;
int A=0,B=0,C=0;
int main()
{
    cout<<"Яшин ЛР6п1 введите значения A и B, я поменяю их местами\n";
    cin>>A>>B;
    C=A;
    A=B;
    B=C;
    cout<< "\nНовое значение A = "<<A<<"\nНовое значение B = "<< B;
    return 0;
}
