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
	else{
		cout<<"Compre qualquer pacote.";
	}
	
	}
	return 0;
}
