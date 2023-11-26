//programa:tablamultiplicar
//autor:Jama Prado Anel
//fecha:24/11/23
#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cout<<"ingrese n:";cin>>n;
	do{
		i=i+1;
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}while (i<10);
	cout<<endl;
	return(0);
}
