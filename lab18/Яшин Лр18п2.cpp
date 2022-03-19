#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout << "Enter massive size: ";
    cin >> n;
    cout << "Enter k: ";
    cin>>i;
    int *a = new int[n];//выделение памяти
    int *b = new int[n];
    for (i = 0; i < n; i++) {//заполнение массивов разными данными cin>>a[i];cin>>b[i];
        a[i] = n-i;
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for (i = 0; i < n; i++) {
        b[i] = float(a[i]+i)/2;
        cout<<b[i]<<" ";
    }
    
    delete [] a;//очистка памяти
    delete [] b;
    return 0;
}