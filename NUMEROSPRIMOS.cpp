#include<iostream>
using namespace std;
int main( ){
	int numero,i=2;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	if(numero>1){
		while(numero%i!=0){
		i=i+1;
	}
		if(i==numero){
			cout<<"El numero ingreado anteriormente es primo: "<<numero<<endl;
		}
			else{
			cout<<"El numero ingresado anteriormente no es un primo: "<<numero<<endl;
			}						
	}
	else{
	cout<<"El numero ingresado no es primo"<<numero<<endl;
	}
	return 0;
}
