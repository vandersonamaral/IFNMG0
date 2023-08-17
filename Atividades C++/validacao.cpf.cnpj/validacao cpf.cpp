#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char cpf[50];
	int a[11];
	int n;
	
	cout<<"Informe o CPF: ";
	cin>>cpf;
	n=strlen(cpf);
	
	if(n!=11){
		cout<<"CPf invalido.";
		return 0;
	}
	//converter a string em vetor de inteiros
	for(int i=0;i<n;i++)
		a[i] = cpf[i]-'0';
	
	int soma1=0;
	int p=10;
	for(int i=0;i<9;i++){
		soma1+=a[i]*p;
		p--;
	}
	//calculando o dv1
	int dv1;
	
	if(soma1%11<2)
		dv1=0;
	else
		dv1=11-(soma1%11);
	
	int soma2=0;
	p=11;
	for(int i=0;i<10;i++){
		soma2+=a[i]*p;
		p--;
	}
	//calculando o dv2
	
	int dv2 ;
	if(soma2 %11<2)
		dv2=0;
	else
		dv2=11-(soma2%11);
		
	//verificando se os digitos estao ok
	if (a[9]==dv1 && a[10]==dv2)
		cout<<"CPF Valido";
	else
		cout<<"CPF Invalido";	
		
	return 0;
}
