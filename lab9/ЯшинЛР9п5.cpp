#include <iostream>

using namespace std;
int year,centery,n;
int main()
{
    cout<<"ЛР9п5. Введите год.";
    cin>>year;
    n=year%100;
    centery=year/100;
    if (n>0){
        centery++;
    }
    cout<<"Введённый год в "<<centery<<" веке";
    
    return 0;
}
