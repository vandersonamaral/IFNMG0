/*Aula 27 A- �s ma��s custam R$ 0,30 cadas forem compradas menos do que d�zia, e R $ 0,25
se for compradas pelo menos doze. Escreva um programa que leia o n�mero de ma��s compradas,
calcule e escreva o valor total da compra.*/
#include <iostream>
using namespace std;
int main() {
	int q;
	float total;
	cout<<"Digite a quantidade de macas: ";
	cin>>q;
	if(q < 12){
		total=q*0.30;
	}
	else{
		total=q*0.25;
	}
	cout<<"Total a pagar: "<<total;
	return 0;
}
