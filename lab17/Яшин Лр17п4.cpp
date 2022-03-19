#include <iostream>
using namespace std;

int main()
{
    int n,b,i,lmax;
    cout << "Enter massive size: ";
    cin >> n;
    if(n%2>0){
        n-=1;
    }
    int *a = new int[n];//выделение памяти
    for (i = 0; i < n; i++) {
        cin>>a[i];
        //a[i] = n-i;//заполнение массива, можно использовать ручной ввод cin>>a[i];
        //cout<<a[i]<<" ";
    }
    lmax=0;
    for(i=1;i<n;i++){
        if(i<n-1){
            if((a[i]>a[i-1])&&(a[i]>a[i+1])){
            lmax=i;
            }
        }
        else{
            if(a[i]>a[i-1]){
            lmax=i;//исключение для крайнего элемента массива
            }
        }
    }
    cout<<"\nНомер последнего локального максимума = "<<lmax+1;
    delete [] a;//очистка памяти
    return 0;
}