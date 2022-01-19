#include <iostream>
#include <locale>
using namespace std;

int main()
{

    int x;
    setlocale(LC_ALL, "Rus");
    cout<<"Введите количество учебных заданий:";
    cin>>x;

    if (x / 10 == 1) {
        switch (x) {
        case 10:
            cout<<"десять учебных заданий. \n";
            break;
        case 11:
            cout<<"одинадцать учебных заданий.\n";
            break;
        case 12:
            cout<<"двенадцать учебных заданий.\n";
            break;
        case 13:
            cout<<"тринадцать учебных заданий.\n";
            break;
        case 14:
            cout<<"четырнадцать учебных заданий.\n";
            break;
        case 15:
            cout<<"пятнадцать учебных заданий.\n";
            break;
        case 16:
            cout<<"шестнадцать учебных заданий.\n";
            break;
        case 17:
            cout<<"семнадцать учебных заданий.\n";
            break;
        case 18:
            cout<<"восемнадцать учебных заданий.\n";
            break;
        case 19:
            cout<<"девятнадцать учебных заданий.\n";
            break;
        }
    }
    else {
        switch (x / 10) {
        case 2:
            cout<<"двадцать ";
            break;
        case 3:
            cout<<"тридцать ";
            break;
        case 4:
            cout<<"сорок ";
            break;
        }
        switch (x % 10) {
        case 1:
            cout<<"одно ";
            break;
        case 2:
            cout<<"два ";
            break;
        case 3:
            cout<<"три ";
            break;
        case 4:
            cout<<"четыре ";
            break;
        case 5:
            cout<<"пять ";
            break;
        case 6:
            cout<<"шесть ";
            break;
        case 7:
            cout<<"семь ";
            break;
        case 8:
            cout<<"восемь ";
            break;
        case 9:
            cout<<"девять ";
            break;
        }
        switch (x % 10) {
        case 1:
            cout<<"учебное задание.\n";
            break;
        case 2:
        case 3:
        case 4:
            cout<<"учебных задания.\n";
            break;
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout<<"учебных заданий.\n";
            break;
        }
    }
    return 0;
}