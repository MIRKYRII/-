#include <iostream>
using namespace std;

int main()
{
    int n,b,i,isitarythmprogression,possiblebase;
    cout << "Enter massive size: ";
    cin >> n;

    int *a = new int[n];//выделение памяти
    cout<<"массив:";
    for (i = 0; i < n; i++) {
        a[i] = i;
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    possiblebase=a[2]-a[1];
    for(i=1;i<n-1;i++){
        if((a[i+1]-a[i])==possiblebase){
            isitarythmprogression=1;
        }
        else{
            isitarythmprogression=0;
        }
    }
    delete [] a;//очистка памяти
    cout<<possiblebase*isitarythmprogression;
    return 0;
}