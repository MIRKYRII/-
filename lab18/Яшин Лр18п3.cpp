#include <iostream>
using namespace std;

int main()
{
    int n,i,lastodd=0;
    cout << "Enter massive size: ";
    cin >> n;
    int *a = new int[n];//выделение памяти
    for (i = 0; i < n; i++) {//заполнение масса данными cin>>a[i];
        cin>>a[i];
    }
    cout<<"\n";
    for (i = 0; i < n; i++) {
        if(a[i]%2==1){
            lastodd = a[i];
        }
        }
    for (i = 0; i < n; i++) {
        if(a[i]%2==1){
            a[i]+=lastodd;
        }
        cout<<a[i];
    }
    
    delete [] a;//очистка памяти
    return 0;
}