#include <iostream>

using namespace std;
int A=0,B=0,C=0,D=0;
int main()
{
    cout<<"Яшин ЛР6п2 введите значения A,B,С я поменяю их местами, так чтобы А=С,B=A,C=B\n";
    cin>>A>>B>>C;
    D=C;
    C=B;
    B=A;
    A=D;
    cout<< "\nНовое значение A = "<<A<<"\nНовое значение B = "<< B<<"\nНовое значение C = "<< C;
    return 0;
}
