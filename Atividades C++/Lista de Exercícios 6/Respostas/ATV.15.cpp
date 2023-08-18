#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char reverso[30], nome[30];
	int j=0,i;
	cout << "Digite um nome: ";
	cin >> nome;
	for (i = strlen(nome) - 1; i >= 0; i--) {
		reverso[j] = nome[i];
		j++;
	}
	reverso[j] = '\0';
	if (strcmp(nome, reverso) == 0) {
		cout << "E palindromo";
	} 
	else 
	cout << "Nao e palindromo";
	
	return 0;
}
