#include <iostream>
using namespace std;

int main()
{
    int n,i,max=0,min,maxi,mini,dir=1;
    cout << "Enter massive size: ";
    cin >> n;
    int *a = new int[n];//выделение памяти
    for (i = 0; i < n; i++) {//заполнение масса данными cin>>a[i];
        cin>>a[i];
    }
    min=a[1];//чтобы минимум мог вычисляться
    cout<<"\n";
    for (i = 0; i < n; i++) {
        if(a[i]>max){
            max=a[i];
            maxi=i;
        }
        if(a[i]<min){
            min=a[i];
            mini=i;
        }
        }
    if(maxi<mini){
        for(i=maxi+1;i<mini;i++){
        a[i]=0;
        cout<<a[i];
        }
    }
    else{
        for(i=mini+1;i<maxi;i++){
        a[i]=0;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    delete [] a;//очистка памяти
    return 0;
}