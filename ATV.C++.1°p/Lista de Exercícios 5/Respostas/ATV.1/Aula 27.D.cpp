/*Aula 27D-Pacotes de faldas de uma mesma marca podem ser vendidos em embalagens com
quantidades diferentes. Uma determinada marca pode oferecer um mesmo produto em embalagens
com 12, 15, 18, 30, 48, mais ou menos unidades (a quantidade pode variar).
Deseja-se fazer um programa que facilite a comparação de preços de dois pacotes fraldas
vendidas em quantidades diferentes.
Faça um programa em C++ que solicite ao usuário que informe os preços e as quantidades
de fraldas de dois pacotes de fraldas; o programa então dirá ao usuário qual pacote
compensa mais comprar, baseado no preços unitários das fraldas de cada pacote.
*/


#include <iostream>
using namespace std;
int main() {
	int pact1,pact2;
	float preco1,preco2,precouni1,precouni2;
	cout<<"Informe o preco do pacote 1 : ";
	cin>>preco1;
	cout<<"a quantidade de fraldas do pacote1: ";
	cin>>pact1;
	cout<<"Informe o preco do pacote 2: ";
	cin>>preco2;
	cout <<"a quantidade de fraldas do pacote2: ";
	cin>>pact2;
	precouni1=preco1/pact1;
	precouni2=preco2/pact2;
	if(precouni1<precouni2){
		cout<<"O pacote com "<< pact1 <<" fraldas e uma otima opcao";
	}
	else{
	if(precouni1>precouni2){
		cout<<"O pacote com "<< pact2 <<" fraldas e uma otima opcao";
	}
	else
	cout<<"Compre qualquer pacote.";
	
	
	}
	return 0;
}
