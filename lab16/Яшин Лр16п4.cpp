#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i,chet;
    cout << "Enter massive size: ";
    cin >> n;
    chet=n%2;//чётность размера массива
    int *p_darr = new int[n];//выделение памяти
    for (i = 0; i < n; i++) {
        p_darr[i] = i;
    }
    for (i = 0; i < (n/2)+chet; i++) {
        cout<<p_darr[i]<<" ";
        if(i*2+1<n){
        cout<<p_darr[n-i-1]<<" ";
        }
        }
    delete [] p_darr;//очистка памяти
    return 0;
}