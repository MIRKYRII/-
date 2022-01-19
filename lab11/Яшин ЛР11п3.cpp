#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double Ax,Bx,Cx,Ay,By,Cy,AB,AC;
	cout<<"Введите значение Aх:\n";
	cin>>Ax;
	cout<<"Введите значение Ay:\n";
	cin>>Ay;
	cout<<"Введите значение Bx:\n";
	cin>>Bx;
	cout<<"Введите значение By:\n";
	cin>>By;
	cout<<"Введите значение Cx:\n";
	cin>>Cx;
	cout<<"Введите значение Cy:\n";
	cin>>Cy;
	AB=sqrt((fabs(Ax - Bx)*fabs(Ax - Bx)+fabs(Ay - By)*fabs(Ay - By)));
	AC=sqrt((fabs(Ax - Cx)*fabs(Ax - Cx)+fabs(Ay - Cy)*fabs(Ay - Cy)));
    if(AB>AC){
        cout<<"точка С ближе к точке А и расположена на рассотянии"<<AC;
    }
    else if(AB<AC){
        cout<<"точка B ближе к точке А и расположена на рассотянии"<<AB;
    }
	return 0;
}