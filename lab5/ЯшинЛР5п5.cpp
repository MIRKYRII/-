#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
    bool run=1;
    cout <<"5.5 Даны координаты вершин треугольника:A(x1, y1), B(x2, y2), C(x3,y3)."
<<"\nНайти периметр и площадь данного треугольника.\n";
    while (run>0){
            cout<<" Введите координаты точки A(x1,y1) ";
            cin >> x1>> y1;
            cout <<"\nВведите координаты точки B(x2,y2) ";
            cin >> x2>> y2;
            cout <<"\nВведите координаты точки C(x3,y3) ";
            cin>> x3>>y3;
            cout<<"Площадь треугольника ABC = "<<0.5*abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))<<"\nПериметр треугольника ABC = "<<sqrt(pow(x2-x1,2) + pow(y2-y1,2)) + sqrt(pow(x2-x3,2) + pow(y2-y3,2)) + sqrt(pow(x3-x1,2) + pow(y3-y1,2));
            cout<<"\n введите 1 чтобы начать программу заново, 0 чтобы закрыть";
        cin>>run;
    }
    return 0;
}