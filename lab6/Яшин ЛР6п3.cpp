#include <iostream>

using namespace std;
int A=0,B=0,C=0,D=0;
int main()
{
    cout<<"Яшин ЛР6п3 введите значения A и B, я поменяю их местами, так, чтобы C=A,B=C,A=B\n";
    cin>>A>>B>>C;
    D=C;
    C=A;
    A=B;
    B=D;
    cout<< "\nНовое значение A = "<<A<<"\nНовое значение B = "<< B<<"\nНовое значение C = "<< C;
    return 0;
}
