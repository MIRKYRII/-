#include <iostream>
using namespace std;


int main()
{

    int x,d;
    char y;
    char a[4]{'S','Z','U','V'};
    cout<<"Введите направление в котором робот смотрит сейчас, S,Z,U,V:\n";//0.1.2.3
    cin>>y;
    cout<<"Введите команду, 1 налево, 0 сохарнять направление, -1 направо:\n";
    cin>>x;
    switch (y) {
    case 'S':
        d=0;
    break;
    case 'Z':
        d=1;
    break;
    case 'U':
        d=2;    
    break;
    case 'V':
        d=3;    
    break;
    }
    d=(4+d+x)%4;
    cout<<a[d];
    return 0;
}