#include <iostream>
#include <string.h>
using namespace std;
const int n=20;

int main() {
	char p[n];
	int soma=0,cont=0,tamanho;
	cout<<"Digite uma palavra: ";
	cin>>p;
	tamanho=strlen(p);
	for(int i=0;i<strlen(p);i++){
		if(p[i]>='A' && p[i]<='Z')
			cont++;
	}
	if(cont==tamanho)
		cout<<"MAIUSCULO";
	else
		cout<<"MINUSCULO";
	
	return 0;
}
