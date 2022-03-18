#include <iostream>
using namespace std;

int main()
{
    unsigned int num,b=1;
    cout << "Enter massive size: ";
    cin >> num;

    int *p_darr = new int[num];//выделение памяти
    for (int i = 0; i < num; i++) {

        p_darr[i] = b+2*i;
        cout<<p_darr[i]<<" ";
    }
    delete [] p_darr;//очистка памяти
    return 0;
}