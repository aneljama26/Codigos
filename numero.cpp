//programa:numeropositivonegativoocero
//autor:Jama Prado Anel
//fecha:24/11/24
#include<iostream>
using namespace std;
int main()
{
	int numero;
	cout<<"ingrese un numero:";cin>>numero;
		if(numero>0){
			cout<<"el numero ingresado es positivo:"<<endl;
		}else 
			if(numero<0){
				cout<<"el numero ingresado es negativo:"<<endl;
			}else{
				cout<<"el numero ingresado es cero:"<<endl;
			}
	return(0);
}
