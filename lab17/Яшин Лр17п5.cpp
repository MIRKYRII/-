#include <iostream>
using namespace std;

int main()
{
    int n,b,i,d,i1,i2;
    cout << "Enter massive size: ";
    cin >> n;
    cout << "\nEnter massive :\n ";
    int *a = new int[n];//выделение памяти
    for (i = 0; i < n; i++) {
        cin>>a[i];
        //a[i] = n-i;//заполнение массива, можно использовать ручной ввод cin>>a[i];
        //cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++){
        
        for(d=0;d<n;d++){
        cout<<"\n"<<i<<" "<<d<<" ";
        if((a[d]==a[i])&&(d!=i)){
            i1=i;
            i2=d;
            break;
        }
        cout<<a[d]<<" "<<a[i];
    }
    }
    cout<<"\nНомера одинаковых чисел"<<i1<<" "<<i2;
    delete [] a;//очистка памяти
    return 0;
}