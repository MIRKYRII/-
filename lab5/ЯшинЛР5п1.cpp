#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float x1=0,y1=0,x2=0,y2=0;
    cout<<"Задание 5.1, введите координаты точки 1\n";
    cin>> x1 >> y1;
    cout<<"введите координаты точки 2\n";
    cin>> x2 >> y2;
    cout<<"длина отрезка между введёнными точками = "<< sqrt(pow(x2-x1,2)+pow(y2-y1,2))<<"\n";
    return 0;
}