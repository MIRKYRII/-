#include <iostream>
using namespace std;

int main()
{
    int n,k,l,average,i,quant;
    cout << "Enter massive size: ";
    cin >> n;
    cout << "Enter start of data for average: ";
    cin>>k;
    cout << "Enter end of data for average: ";
    cin>>l;
    quant=l-k;
    int *a = new int[n];//выделение памяти
    for (i = 0; i < n; i++) {
        //генерация массива
        a[i] = i;
        //cin>>a[i];
        cout<<a[i]<<" ";
    }
    for(i=k;i<l;i++){
        average+=a[i];
    }
    cout<<float(average)/quant;
    delete [] a;//очистка памяти
    return 0;
}