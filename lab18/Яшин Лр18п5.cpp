#include <iostream>
using namespace std;

int main()
{
    int n,i,buf,buf1;
    cout << "Enter massive size: ";
    cin >> n;
    int *a = new int[n];//выделение памяти
    for (i = 0; i < n; i++) {//заполнение масса данными cin>>a[i];
        cin>>a[i];
    }
    cout<<"\n";
    buf=a[0];
    for(i=1;i<n;i++){
        if(buf>a[i]){
        a[i-1]=a[i];
        }
        if(buf<a[i]){
            a[i-1]=buf;
            break;
        }
    }
    cout<<"\n";
    
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    delete [] a;//очистка памяти
    return 0;
}