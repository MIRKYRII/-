#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=0,b=0,c=0,ac=0,bc=0;
    bool option=0,run=1;
    cout <<"Задание 5.3 Даны три точки A, B, C на числовой оси.Точка C расположена между точками A и B. Найти произведение длин отрезков AC и BC\n";
    while (run>0){
            cout<<" Введите координату точки A ";
            cin >> a;
            cout <<"\nВведите координату точки B ";
            cin >> b;
            cout <<"\nВведите координату точки С, C принадлежит отрезку AB ";
            cin >> c;
            option=(a>=c)&&(c>=b)||(a<=c)&&(c<=b);
            switch (option){
                case 0:
                cout<<"Вы не соблюли условие, C не принадлежит отрезку AB";
                break;
                case 1:
                cout<<"произведение длин отрезков AC и BC = "<<abs(b-c)*abs(c-a);
                break;
            }
        cout<<"\n введите 1 чтобы начать программу заново, 0 чтобы закрыть";
        cin>>run;
    }
    return 0;
}