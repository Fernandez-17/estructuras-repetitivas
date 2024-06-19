//*4. Determinar si un número es primo. Recuerde que un número primo solo es divisible por 1 y si mismo.*//
#include<iostream>
using namespace std;
int main( ){
	int numero,i=2;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	if(numero<0){
		cout<<"El numero que ingreso no es valido";
		return 0;
	}else{
		
	if(numero>1){
		while(numero%i!=0){
		i=i+1;
	}
		if(i==numero){
			cout<<"El numero ingresado anteriormente es primo: "<<numero<<endl;
		}
			else{
			cout<<"El numero ingresado anteriormente no es un primo: "<<numero<<endl;
			}						
	}
	else{
	cout<<"El numero ingresado no es primo"<<numero<<endl;
	}
}
	return 0;
}
