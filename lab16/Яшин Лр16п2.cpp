#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    unsigned int num,b;
    cout << "Enter massive size: ";
    cin >> num;
    cout << "Enter geometry progression base: ";
    cin >> b;
    int *p_darr = new int[num];//выделение памяти
    for (int i = 1; i < num; i++) {

        p_darr[i] = pow(b,i);
        cout<<p_darr[i]<<" ";
    }
    delete [] p_darr;//очистка памяти
    return 0;
}