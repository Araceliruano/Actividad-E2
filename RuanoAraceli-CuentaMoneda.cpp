//=============================================================================
//==>Nombre del programa:Cuenta Moneda
//==>Autor:Araceli Ruano
//==>Fecha de elaboracion:2022-05-01
//==>Fecha de actualizacion:2022-05-20
//============================================================================
#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
	int AR_c=0;
	int AR_c1=0;
	int AR_c2=0;
	int AR_cm;
	float AR_vm;
	float AR_a=0;
	float AR_a1=0;
	float AR_a2=0;
	float AR_cstn=0.1;
	cout<<"Ingrese la cantidad total de monedas: "<< endl;
    cin>>AR_cm; 
    do{
    	cout<<"Ingrese el valor de la moneda(0.10, 0.25): ";
    	cin>>AR_vm;
    	AR_c=AR_c+1;
    	AR_a=AR_a+AR_vm;
        if(AR_vm==AR_cstn){
        	AR_c1=AR_c1+1;
        	AR_a1=AR_a1+AR_vm;
        }
		else{ 
		AR_c2=AR_c2+1;
		AR_a2=AR_a2+AR_vm;
		} 
	}while(AR_c<AR_cm);
	cout<<"La cantidad total de monedas ingresadas fue:"<<AR_c<<endl;
	cout<<"La cantidad total de dinero es:"<<AR_a<<endl;
	cout<<"La cantidad de monedas de 10ctv es:"<<AR_c1<<endl;
	cout<<"La cantidad total en monedas de 10ctv es:"<<AR_a1<<endl;
	cout<<"La cantidad de monedas de 25ctv es:"<<AR_c2<<endl;
	cout<<"La cantidad total de dinero en monedas de 25ctv es:"<<AR_a2<<endl;
	cout<<endl<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Cuenta Moneda"<<endl;
cout<<"//==> Archivo : RuanoAraceli-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Araceli Ruano"<<endl;
cout<<"//==>Fecha de elaboracion: 2022-05-01"<<endl;
cout<<"//==>Fecha ultima actualizacion: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;
 return 0;
}
