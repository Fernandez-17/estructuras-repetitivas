/*Diseñar un algoritmo que sume todos los números impares hasta un número "n" dado.*/

#include<iostream>
using namespace std;
int main( ){
	int numero,suma_de_impares=0;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	if (numero<0){
		cout<<"El numero ingresado no es valido";
	}else {
		for(int i=1;i<=numero;i++){
		if(i%2!=0){	
		suma_de_impares=suma_de_impares+i;	
		
		}
	}
	cout<<"La suma total de numeros impares es de: "<<suma_de_impares<<endl;	
}
    return 0;
}

