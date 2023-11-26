//programa:sumadeelementos
//autor:Jama Anel
//fecha:24/10/23
#include<iostream>
using namespace std;
int main()
{
	int numeros[5];
	int suma=0;
	int i=0;
	do{
		cout<<"ingrese el valor para el elemento"<<i+1<<":";cin>>numeros[i];
		suma=suma+numeros[i];
		i++;
	}while(i<5);
	cout<<"la suma de los elementos del arreglo es:"<<suma<<endl;
	return(0);
}
