/*Aula 27 B- Tendo com o entrada a altura e o sexo de uma pessoa, construa um programa que
calcule e imprima seu peso ideal, utilizando as seguintes fórmulas: para homens: ( 72.7 * Altura )
-58 para mulheres: ( 6 2.1 * Altura ) - 44.7 Use o caracteres 'M' 
para masculino ou 'F' para feminino.
*/

#include <iostream>
using namespace std;
int main() {
	char sexo;
	float peso,altura;
	cout<<"Digite a altura: ";
	cin>>altura;
	cout<<"Digite o seu sexo (M/F): ";
	cin>>sexo;
	if( altura>0 && altura<=3.00 )
	if(sexo=='M'){
		peso= 72.7*altura-58;
		cout<<"Seu peso ideal e: "<<peso;
	}
	else
	if(sexo=='f'){
		peso=62.1*altura-44.7;
		cout<<"Seu peso ideal e: "<<peso;
	
	}
	
	else
		cout<<"Sexo invalido";
	else
		cout<<"Altura invalida";
		
	return 0;
}
