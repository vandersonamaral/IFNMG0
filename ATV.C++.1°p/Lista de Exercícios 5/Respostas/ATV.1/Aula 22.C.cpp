/*Aula 22 C- Fa�a um programa em C++ que solicite ao usu�rio que digite uma palavra. O
programa exibir� na tela o �ltimo caractere da palavra digitada.*/
#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char a[15];
	int tam;
	cout<<"Digite uma palavra: ";
	cin>>a;
	tam=strlen(a);
	cout<<tam[a-1];
	return 0;
}
