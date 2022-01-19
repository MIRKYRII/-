#include <iostream>
#include <locale>
using namespace std;
int main()
{

    int x;
    setlocale(LC_ALL, "Rus");
    cout<<"Введите число:";
    cin>>x;

    switch (x / 100) {
    case 1:
        cout<<"сто ";
        break;
    case 2:
        cout<<"двести ";
        break;
    case 3:
        cout<<"триста ";
        break;
    case 4:
        cout<<"четыреста ";
        break;
    case 5:
        cout<<"пятьсот ";
        break;
    case 6:
        cout<<"шестьсот ";
        break;
    case 7:
        cout<<"семьсот ";
        break;
    case 8:
        cout<<"восемьсот  ";
        break;
    case 9:
        cout<<"девятьсот  ";
        break;
    }
    if ((x % 100) / 10 == 1) {
        switch (x % 100) {
        case 10:
            cout<<"десять\n";
            break;
        case 11:
            cout<<"одинадцать\n";
            break;
        case 12:
            cout<<"двенадцать\n";
            break;
        case 13:
            cout<<"тринадцать\n";
            break;
        case 14:
            cout<<"четырнадцать\n";
            break;
        case 15:
            cout<<"пятнадцать\n";
            break;
        case 16:
            cout<<"шестнадцать\n";
            break;
        case 17:
            cout<<"семнадцать\n";
            break;
        case 18:
            cout<<"восемнадцать\n";
            break;
        case 19:
            cout<<"девятнадцать\n";
            break;
        }
    }
    else {
        switch ((x % 100) / 10) {
        case 2:
            cout<<"двадцать ";
            break;
        case 3:
            cout<<"тридцать ";
            break;
        case 4:
            cout<<"сорок ";
            break;
        case 5:
            cout<<"пятьдесят ";
            break;
        case 6:
            cout<<"шестьдесят ";
            break;
        case 7:
            cout<<"семьдесят ";
            break;
        case 8:
            cout<<"восемьдесят ";
            break;
        case 9:
            cout<<"девяносто ";
            break;
        }
        switch (x % 10) {
        case 1:
            cout<<"один\n";
            break;
        case 2:
            cout<<"два\n";
            break;
        case 3:
            cout<<"три\n";
            break;
        case 4:
            cout<<"четыре\n";
            break;
        case 5:
            cout<<"пять\n";
            break;
        case 6:
            cout<<"шесть\n";
            break;
        case 7:
            cout<<"семь\n";
            break;
        case 8:
            cout<<"восемь\n";
            break;
        case 9:
            cout<<"девять\n";
            break;
        }
    }


    return 0;
}