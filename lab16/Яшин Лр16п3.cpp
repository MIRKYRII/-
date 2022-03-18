#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,a,b,i;
    cout << "Enter massive size(n>2): ";
    cin >> n;
    cout << "Enter A";
    cin >> a;
    cout << "Enter B";
    cin >> b;
    if(n>2){
    int *p_darr = new int[n];//выделение памяти
        p_darr[1]=a;
        p_darr[2]=b;
    for (i = 3; i <= n; i++) {
        
        p_darr[i] = p_darr[i-1]+p_darr[i-2];
    }
    for (i = 1; i <= n; i++) {
        cout<<p_darr[i]<<" ";
        
    }
    delete [] p_darr;//очистка памяти
    }
    else{
        cout<<"error n<2";
    }
    return 0;
}