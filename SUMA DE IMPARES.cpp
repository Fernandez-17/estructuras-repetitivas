/*Diseñar un algoritmo que sume todos los números impares hasta un número "n" dado.*/

#include<iostream>
using namespace std;

int suma_impar( int num){
	int suma=0;
	for(int i=1;i<=num ;i++){
	if(i%2!=0){	
	suma=suma+i;
		}
	}
	return suma;
}

int main( ){
	int numero,suma_de_impares=0;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	if (numero<0){
		cout<<"El numero ingresado no es valido"<<endl;
	}else {
	   suma_de_impares=suma_impar(numero);
	   cout<<"La suma total de numeros impares es de: "<<suma_de_impares<<endl;	
	   }
    return 0;
}
