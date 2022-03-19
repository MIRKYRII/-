#include <iostream>
using namespace std;

int main()
{
    int n,buf,i;
    cout << "Enter massive size: ";
    cin >> n;

    int *a = new int[n];//выделение памяти
    int *b = new int[n];
    for (i = 0; i < n; i++) {//заполнение массивов разными данными cin>>a[i];cin>>b[i];
        a[i] = i;
        b[i] = n-i;
        cout<<a[i]<<" ";
        cout<<b[i]<<" \n";
    }
    cout<<"\n";
    for (i = 0; i < n; i++) {
        buf=a[i];
        a[i] = b[i];
        b[i] = buf;
        cout<<a[i]<<" ";
        cout<<b[i]<<" \n";
    }
    delete [] a;//очистка памяти
    delete [] b;
return 0;
}