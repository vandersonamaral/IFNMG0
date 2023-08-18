#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char nome[30];
	int vogais=0;
	cout<<"Digite o nome: ";
	cin>>nome;
	int i=strlen(nome)-1;
	while(i>=0){
		if(nome[i]=='a' || nome[i]=='A'||
		nome[i]=='e'|| nome[i]=='E'||
		nome[i]=='i'|| nome[i]=='I'||
		nome[i]=='o'|| nome[i]=='O'||
		nome[i]=='u'|| nome[i]=='U'){
			vogais++;}
	i--;
	
	}
	cout<<vogais;
	return 0;
}
