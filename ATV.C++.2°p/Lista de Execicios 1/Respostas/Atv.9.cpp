#include <iostream>
const int n=10;
using namespace std;
struct Dadosalu{
	char nome[50];
	char sexo;
	float nota;
};
int main() {
	Dadosalu a[n];
	int cont=0,m=0;
	float mediaf=0,mediam=0,meninos=0,menina=0;
	for(int i=0;i<n;i++){
		cout<<"Nome: ";
		cin>>a[i].nome;
		cout<<"Sexo: ";
		cin>>a[i].sexo;
		cout<<"Nota: ";
		cin>>a[i].nota;
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		if(a[i].sexo=='m'||a[i].sexo=='M'){
			meninos+=a[i].nota;
			cont++;
		}
		if(a[i].sexo=='F'||a[i].sexo=='f'){
			menina+=a[i].nota;
			m++;
	}
	}

	if(m>0){
		mediaf=menina/m;
		cout<<"Media das meninas= "<<mediaf;
	}
	else {
		mediaf=0;
		cout<<"\nNao ha meninas media =0 ";
	}
	if(cont>0){
		mediam=meninos/cont;
		cout<<"\nMedia dos meninos= "<<mediam;
	}
	else
		cout<<"\nNao ha meninos media= 0";
	return 0;
}
