/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    double a=0, b=0;
    cout<<"Задание 1.5, введите 2 числа для которых нужно посчитать суму, разность, произведение, частное их модулей\n";
    cin>> a>> b;
    cout<<"сумма модулей чисел "<< a<<" и "<< b<<"= "<<abs(a)+abs(b)<<"\n"
    <<"разность модулей чисел "<< a<<" и "<< b<<"= "<<abs(a) - abs(b)<<"\n"
    <<"произведение модулей чисел "<< a<<" и "<< b<<"= "<<abs(a)*abs(b)<<"\n"
    <<"частное модулей чисел "<< a<<" и "<< b<<"= "<<abs(a)/abs(b)<<"\n";
    return 0;
}
