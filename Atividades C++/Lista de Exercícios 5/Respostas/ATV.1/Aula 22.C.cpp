/*Aula 22 C- Faça um programa em C++ que solicite ao usuário que digite uma palavra. O
programa exibirá na tela o último caractere da palavra digitada.*/
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
