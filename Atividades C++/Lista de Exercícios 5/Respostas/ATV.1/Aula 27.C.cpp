/*Aula 27 C-Escreva um programa que leia as medidas dos lados de um tri�ngulo e escreva se
ele � Equil�tero, Is�sceles ou Escaleno.
Conforme descrito abaixo: Tri�ngulo Equil�tero: possui os 3 lados iguais. 
Tri�ngulo Is�sceles: possui 2 lados iguais. Tri�ngulo Escaleno: possui 3 lados diferentes.*/
#include <iostream>
using namespace std;
int main() {
	float a,b,c;
	cout<<"Digite as medidas dos lados do Triangulo: ";
	cin>>a>>b>>c;
	if(a==b && b==c)
		cout<<"Triangulo equilatero";
	if((a==b && b!=c) || (c==a && a!=b)||(b==c && c!=a))
		cout<<"Triangulo isoceles";
	if(a!=b && b!=c && c!=a )
		cout<<"Triangulo escaleno";
	return 0;
}
