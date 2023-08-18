/*Aula 27 C-Escreva um programa que leia as medidas dos lados de um triângulo e escreva se
ele é Equilátero, Isósceles ou Escaleno.
Conforme descrito abaixo: Triângulo Equilátero: possui os 3 lados iguais. 
Triângulo Isósceles: possui 2 lados iguais. Triângulo Escaleno: possui 3 lados diferentes.*/
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
