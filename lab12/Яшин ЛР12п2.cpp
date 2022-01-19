#include <iostream>
using namespace std;


int main()
{

    int x;
    char y;
    cout<<"Введите направление:";
    cin>>y;
    cout<<"Введите команду:";
    cin>>x;

    switch (y) {
    case 'S':
        switch (x) {
        case 1:
            y = 'Z';
            break;
        case 0:
            y = 'S';
            break;
        case -1:
            y = 'V';
            break;
        }
        break;
    case 'V':
        switch (x) {
        case 1:
           y = 'S';
            break;
        case 0:
            y = 'V';
            break;
        case -1:
            y = 'U';
            break;
        }
    case 'U':
        switch (x) {
        case 1:
            y = 'V';
            break;
        case 0:
            y = 'U';
            break;
        case -1:
            y = 'Z';
            break;
        }
        break;
    case 'Z':
        switch (x) {
        case 1:
            y = 'U';
            break;
        case 0:
            y = 'Z';
            break;
        case -1:
            y = 'S';
            break;
        }
    }

    cout<<y;


    return 0;
}