#include <iostream>
using namespace std;

int main()
{
    int n,b,i,min;
    cout << "Enter massive size: ";
    cin >> n;
    if(n%2>0){
        n-=1;
    }
    int *a = new int[n];//выделение памяти
    for (i = 0; i < n; i++) {
        a[i] = n-i;//заполнение массива, можно использовать ручной ввод cin>>a[i];
        cout<<a[i]<<" ";
    }
    min=a[0];
    for(i=0;i<n;i+=2){
        if(a[i]<min){
            min=a[i];
        }    
    }
    cout<<min;
    delete [] a;//очистка памяти
    return 0;
}