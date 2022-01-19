#include <iostream>
#include <locale>
using namespace std;
int main()
{

    int x;
    setlocale(LC_ALL, "Rus");
    cout<<"Введите год:";
    cin>>x;

    switch ((x) % 10) {
    case 0:
    case 1:
        cout<<"бело";
        break;
    case 2:
    case 3:
        cout<<"черно";
        break;
    case 4:
    case 5:
        cout<<"зелёно";
        break;
    case 6:
    case 7:
        cout<<"красно";
        break;
    case 8:
    case 9:
        cout<<"жёлто";
        break;
    }
    switch (x % 12) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        cout<<"й ";
        break;
    case 6:
    case 7:
    case 8:
        cout<<"го ";
        break;
    }

    switch ((x + 8) % 12) {
    case 0:
        cout<<"крысы\n";
        break;
    case 1:
        cout<<"коровы\n";
        break;
    case 2:
        cout<<"тигра\n";
        break;
    case 3:
        cout<<"зайца\n";
        break;
    case 4:
        cout<<"дракона\n";
        break;
    case 5:
        cout<<"змеи\n";
        break;
    case 6:
        cout<<"лошади\n";
        break;
    case 7:
        cout<<"овцы\n";
        break;
    case 8:
        cout<<"обезьяны\n";
        break;
    case 9:
        cout<<"курицы\n";
        break;
    case 10:
        cout<<"собаки\n";
        break;
    case 11:
        cout<<"свиньи\n";
        break;
    }


    return 0;
}