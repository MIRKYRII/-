#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    unsigned int num,b,a;
    cout << "Введите размер массива ";
    cin >> num;
    cout << "Введите первое число прогрессии ";
    cin >> b;
    cout << "Введите основание геометрической прогрессии ";
    cin >> a;
    cout<<b<<" ";
    int *p_darr = new int[num];//выделение памяти
    for (int i = 1; i < num; i++) {
        p_darr[i] = b*pow(a,i);
        cout<<p_darr[i]<<" ";
    }
    delete [] p_darr;//очистка памяти
    return 0;
}
