#include <iostream>
using namespace std;
double x,a,y,answ1,answ2;
int main()
{
    cout<<"ЛР7 п3 Известно, что x кг конфет стоит a рублей, сколько стоит 1кг конфет, и y кг конфет\nВведите x\n";
    cin>>x;
    cout<<"\nВведите a\n";
    cin>>a;
    cout<<"\nВведите y\n";
    cin>>y;
    answ1=a/x;
    cout<<"1 кг конфет стоит "<<answ1<<" рублей\n";
    answ2=answ1*y;
    cout<<y<<" кг конфет стоит "<<answ2<<" рублей\n";
    return 0;
}
